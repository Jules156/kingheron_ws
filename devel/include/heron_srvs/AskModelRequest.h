// Generated by gencpp from file heron_srvs/AskModelRequest.msg
// DO NOT EDIT!


#ifndef HERON_SRVS_MESSAGE_ASKMODELREQUEST_H
#define HERON_SRVS_MESSAGE_ASKMODELREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace heron_srvs
{
template <class ContainerAllocator>
struct AskModelRequest_
{
  typedef AskModelRequest_<ContainerAllocator> Type;

  AskModelRequest_()
    : model_name()
    , position()  {
    }
  AskModelRequest_(const ContainerAllocator& _alloc)
    : model_name(_alloc)
    , position(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _model_name_type;
  _model_name_type model_name;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _position_type;
  _position_type position;





  typedef boost::shared_ptr< ::heron_srvs::AskModelRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::heron_srvs::AskModelRequest_<ContainerAllocator> const> ConstPtr;

}; // struct AskModelRequest_

typedef ::heron_srvs::AskModelRequest_<std::allocator<void> > AskModelRequest;

typedef boost::shared_ptr< ::heron_srvs::AskModelRequest > AskModelRequestPtr;
typedef boost::shared_ptr< ::heron_srvs::AskModelRequest const> AskModelRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::heron_srvs::AskModelRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::heron_srvs::AskModelRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::heron_srvs::AskModelRequest_<ContainerAllocator1> & lhs, const ::heron_srvs::AskModelRequest_<ContainerAllocator2> & rhs)
{
  return lhs.model_name == rhs.model_name &&
    lhs.position == rhs.position;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::heron_srvs::AskModelRequest_<ContainerAllocator1> & lhs, const ::heron_srvs::AskModelRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace heron_srvs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::heron_srvs::AskModelRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::heron_srvs::AskModelRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::heron_srvs::AskModelRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::heron_srvs::AskModelRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::heron_srvs::AskModelRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::heron_srvs::AskModelRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::heron_srvs::AskModelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ea744c543246b5934e4a93dfd88c4479";
  }

  static const char* value(const ::heron_srvs::AskModelRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xea744c543246b593ULL;
  static const uint64_t static_value2 = 0x4e4a93dfd88c4479ULL;
};

template<class ContainerAllocator>
struct DataType< ::heron_srvs::AskModelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "heron_srvs/AskModelRequest";
  }

  static const char* value(const ::heron_srvs::AskModelRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::heron_srvs::AskModelRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string model_name\n"
"geometry_msgs/Point position\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::heron_srvs::AskModelRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::heron_srvs::AskModelRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.model_name);
      stream.next(m.position);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AskModelRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::heron_srvs::AskModelRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::heron_srvs::AskModelRequest_<ContainerAllocator>& v)
  {
    s << indent << "model_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.model_name);
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HERON_SRVS_MESSAGE_ASKMODELREQUEST_H
