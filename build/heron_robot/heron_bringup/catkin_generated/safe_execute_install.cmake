execute_process(COMMAND "/home/kingheron/kingheron_ws/build/heron_robot/heron_bringup/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/kingheron/kingheron_ws/build/heron_robot/heron_bringup/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
