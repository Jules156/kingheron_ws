# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from heron_msgs/Status.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import genpy
import std_msgs.msg

class Status(genpy.Message):
  _md5sum = "73638ba99aee6dc46e9610079bfb59d8"
  _type = "heron_msgs/Status"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """# Specific system status data, transmitted by the MCU at 1Hz on status topic.

Header header

# Commit of firmware source.
string hardware_id

# Times since MCU power-on and MCU rosserial connection, respectively.
duration mcu_uptime
duration connection_uptime

# Temperature of PCB as measured by internal AVR thermometer,
# reported in degrees centigrade.
float32 pcb_temperature

# Current sense available on platform, in amps.
# Averaged over the message period.
float32 user_current

# Integration of power consumption since MCU power-on, in watt-hours.
float32 user_power_consumed
float32 motor_power_consumed
float32 total_power_consumed

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id
"""
  __slots__ = ['header','hardware_id','mcu_uptime','connection_uptime','pcb_temperature','user_current','user_power_consumed','motor_power_consumed','total_power_consumed']
  _slot_types = ['std_msgs/Header','string','duration','duration','float32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,hardware_id,mcu_uptime,connection_uptime,pcb_temperature,user_current,user_power_consumed,motor_power_consumed,total_power_consumed

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Status, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.hardware_id is None:
        self.hardware_id = ''
      if self.mcu_uptime is None:
        self.mcu_uptime = genpy.Duration()
      if self.connection_uptime is None:
        self.connection_uptime = genpy.Duration()
      if self.pcb_temperature is None:
        self.pcb_temperature = 0.
      if self.user_current is None:
        self.user_current = 0.
      if self.user_power_consumed is None:
        self.user_power_consumed = 0.
      if self.motor_power_consumed is None:
        self.motor_power_consumed = 0.
      if self.total_power_consumed is None:
        self.total_power_consumed = 0.
    else:
      self.header = std_msgs.msg.Header()
      self.hardware_id = ''
      self.mcu_uptime = genpy.Duration()
      self.connection_uptime = genpy.Duration()
      self.pcb_temperature = 0.
      self.user_current = 0.
      self.user_power_consumed = 0.
      self.motor_power_consumed = 0.
      self.total_power_consumed = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.hardware_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_4i5f().pack(_x.mcu_uptime.secs, _x.mcu_uptime.nsecs, _x.connection_uptime.secs, _x.connection_uptime.nsecs, _x.pcb_temperature, _x.user_current, _x.user_power_consumed, _x.motor_power_consumed, _x.total_power_consumed))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.mcu_uptime is None:
        self.mcu_uptime = genpy.Duration()
      if self.connection_uptime is None:
        self.connection_uptime = genpy.Duration()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.hardware_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.hardware_id = str[start:end]
      _x = self
      start = end
      end += 36
      (_x.mcu_uptime.secs, _x.mcu_uptime.nsecs, _x.connection_uptime.secs, _x.connection_uptime.nsecs, _x.pcb_temperature, _x.user_current, _x.user_power_consumed, _x.motor_power_consumed, _x.total_power_consumed,) = _get_struct_4i5f().unpack(str[start:end])
      self.mcu_uptime.canon()
      self.connection_uptime.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.hardware_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_4i5f().pack(_x.mcu_uptime.secs, _x.mcu_uptime.nsecs, _x.connection_uptime.secs, _x.connection_uptime.nsecs, _x.pcb_temperature, _x.user_current, _x.user_power_consumed, _x.motor_power_consumed, _x.total_power_consumed))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.mcu_uptime is None:
        self.mcu_uptime = genpy.Duration()
      if self.connection_uptime is None:
        self.connection_uptime = genpy.Duration()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.hardware_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.hardware_id = str[start:end]
      _x = self
      start = end
      end += 36
      (_x.mcu_uptime.secs, _x.mcu_uptime.nsecs, _x.connection_uptime.secs, _x.connection_uptime.nsecs, _x.pcb_temperature, _x.user_current, _x.user_power_consumed, _x.motor_power_consumed, _x.total_power_consumed,) = _get_struct_4i5f().unpack(str[start:end])
      self.mcu_uptime.canon()
      self.connection_uptime.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_4i5f = None
def _get_struct_4i5f():
    global _struct_4i5f
    if _struct_4i5f is None:
        _struct_4i5f = struct.Struct("<4i5f")
    return _struct_4i5f
