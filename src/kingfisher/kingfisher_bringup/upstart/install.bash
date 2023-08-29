#!/bin/bash

# Run this as root, from the directory containing it!
#
# USAGE: sudo ./install.bash
#

stackPath=./

export robot=kingfisher
export user=administrator
export release=$(ls /opt/ros/ | tail -n1)

source helpers.bash

mkdir -p /etc/ros
rm -f /etc/ros/setup.bash
ln -s /home/${user}/ros/setup.bash /etc/ros/setup.bash
source /etc/ros/setup.bash
pushd `rospack find ${robot}_bringup`/upstart > /dev/null

install_udev_rules
install_job core eth0 11311
# install_job interface wlan0 11311

# Configure ublox GPS.
ublox_hex=`rospack find ${robot}_bringup`/config/ublox.hex
if [ -e /dev/ublox ]; then
  echo "Attempting to configure ublox GPS."
  sed '/^\#/d' $ublox_hex | xxd -r -p > /dev/ublox
else
  echo "Can't find ublox GPS to configure it. Please replug it and rerun this script."
fi

popd > /dev/null
