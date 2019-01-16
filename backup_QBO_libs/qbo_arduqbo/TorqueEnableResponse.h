// Generated by gencpp from file qbo_arduqbo/TorqueEnableResponse.msg
// DO NOT EDIT!


#ifndef QBO_ARDUQBO_MESSAGE_TORQUEENABLERESPONSE_H
#define QBO_ARDUQBO_MESSAGE_TORQUEENABLERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace qbo_arduqbo
{
template <class ContainerAllocator>
struct TorqueEnableResponse_
{
  typedef TorqueEnableResponse_<ContainerAllocator> Type;

  TorqueEnableResponse_()
    {
    }
  TorqueEnableResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::qbo_arduqbo::TorqueEnableResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::qbo_arduqbo::TorqueEnableResponse_<ContainerAllocator> const> ConstPtr;

}; // struct TorqueEnableResponse_

typedef ::qbo_arduqbo::TorqueEnableResponse_<std::allocator<void> > TorqueEnableResponse;

typedef boost::shared_ptr< ::qbo_arduqbo::TorqueEnableResponse > TorqueEnableResponsePtr;
typedef boost::shared_ptr< ::qbo_arduqbo::TorqueEnableResponse const> TorqueEnableResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::qbo_arduqbo::TorqueEnableResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::qbo_arduqbo::TorqueEnableResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace qbo_arduqbo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'qbo_arduqbo': ['/home/nvidia/catkin_ws/src/qbo_arduqbo/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::qbo_arduqbo::TorqueEnableResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::qbo_arduqbo::TorqueEnableResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qbo_arduqbo::TorqueEnableResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qbo_arduqbo::TorqueEnableResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qbo_arduqbo::TorqueEnableResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qbo_arduqbo::TorqueEnableResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::qbo_arduqbo::TorqueEnableResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::qbo_arduqbo::TorqueEnableResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::qbo_arduqbo::TorqueEnableResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "qbo_arduqbo/TorqueEnableResponse";
  }

  static const char* value(const ::qbo_arduqbo::TorqueEnableResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::qbo_arduqbo::TorqueEnableResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::qbo_arduqbo::TorqueEnableResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::qbo_arduqbo::TorqueEnableResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TorqueEnableResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::qbo_arduqbo::TorqueEnableResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::qbo_arduqbo::TorqueEnableResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // QBO_ARDUQBO_MESSAGE_TORQUEENABLERESPONSE_H
