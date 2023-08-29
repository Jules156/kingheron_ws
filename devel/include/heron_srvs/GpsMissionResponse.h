// Generated by gencpp from file heron_srvs/GpsMissionResponse.msg
// DO NOT EDIT!


#ifndef HERON_SRVS_MESSAGE_GPSMISSIONRESPONSE_H
#define HERON_SRVS_MESSAGE_GPSMISSIONRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace heron_srvs
{
template <class ContainerAllocator>
struct GpsMissionResponse_
{
  typedef GpsMissionResponse_<ContainerAllocator> Type;

  GpsMissionResponse_()
    : success(false)
    , message()  {
    }
  GpsMissionResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _message_type;
  _message_type message;





  typedef boost::shared_ptr< ::heron_srvs::GpsMissionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::heron_srvs::GpsMissionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GpsMissionResponse_

typedef ::heron_srvs::GpsMissionResponse_<std::allocator<void> > GpsMissionResponse;

typedef boost::shared_ptr< ::heron_srvs::GpsMissionResponse > GpsMissionResponsePtr;
typedef boost::shared_ptr< ::heron_srvs::GpsMissionResponse const> GpsMissionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::heron_srvs::GpsMissionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::heron_srvs::GpsMissionResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::heron_srvs::GpsMissionResponse_<ContainerAllocator1> & lhs, const ::heron_srvs::GpsMissionResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success &&
    lhs.message == rhs.message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::heron_srvs::GpsMissionResponse_<ContainerAllocator1> & lhs, const ::heron_srvs::GpsMissionResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace heron_srvs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::heron_srvs::GpsMissionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::heron_srvs::GpsMissionResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::heron_srvs::GpsMissionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::heron_srvs::GpsMissionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::heron_srvs::GpsMissionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::heron_srvs::GpsMissionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::heron_srvs::GpsMissionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "937c9679a518e3a18d831e57125ea522";
  }

  static const char* value(const ::heron_srvs::GpsMissionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x937c9679a518e3a1ULL;
  static const uint64_t static_value2 = 0x8d831e57125ea522ULL;
};

template<class ContainerAllocator>
struct DataType< ::heron_srvs::GpsMissionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "heron_srvs/GpsMissionResponse";
  }

  static const char* value(const ::heron_srvs::GpsMissionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::heron_srvs::GpsMissionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"string message\n"
"\n"
;
  }

  static const char* value(const ::heron_srvs::GpsMissionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::heron_srvs::GpsMissionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GpsMissionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::heron_srvs::GpsMissionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::heron_srvs::GpsMissionResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HERON_SRVS_MESSAGE_GPSMISSIONRESPONSE_H
