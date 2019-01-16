// Generated by gencpp from file qbo_arduqbo/TorqueEnable.msg
// DO NOT EDIT!


#ifndef QBO_ARDUQBO_MESSAGE_TORQUEENABLE_H
#define QBO_ARDUQBO_MESSAGE_TORQUEENABLE_H

#include <ros/service_traits.h>


#include <qbo_arduqbo/TorqueEnableRequest.h>
#include <qbo_arduqbo/TorqueEnableResponse.h>


namespace qbo_arduqbo
{

struct TorqueEnable
{

typedef TorqueEnableRequest Request;
typedef TorqueEnableResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct TorqueEnable
} // namespace qbo_arduqbo


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::qbo_arduqbo::TorqueEnable > {
  static const char* value()
  {
    return "e44dc96db32bd58b5a896c2c5bf316d0";
  }

  static const char* value(const ::qbo_arduqbo::TorqueEnable&) { return value(); }
};

template<>
struct DataType< ::qbo_arduqbo::TorqueEnable > {
  static const char* value()
  {
    return "qbo_arduqbo/TorqueEnable";
  }

  static const char* value(const ::qbo_arduqbo::TorqueEnable&) { return value(); }
};


// service_traits::MD5Sum< ::qbo_arduqbo::TorqueEnableRequest> should match 
// service_traits::MD5Sum< ::qbo_arduqbo::TorqueEnable > 
template<>
struct MD5Sum< ::qbo_arduqbo::TorqueEnableRequest>
{
  static const char* value()
  {
    return MD5Sum< ::qbo_arduqbo::TorqueEnable >::value();
  }
  static const char* value(const ::qbo_arduqbo::TorqueEnableRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::qbo_arduqbo::TorqueEnableRequest> should match 
// service_traits::DataType< ::qbo_arduqbo::TorqueEnable > 
template<>
struct DataType< ::qbo_arduqbo::TorqueEnableRequest>
{
  static const char* value()
  {
    return DataType< ::qbo_arduqbo::TorqueEnable >::value();
  }
  static const char* value(const ::qbo_arduqbo::TorqueEnableRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::qbo_arduqbo::TorqueEnableResponse> should match 
// service_traits::MD5Sum< ::qbo_arduqbo::TorqueEnable > 
template<>
struct MD5Sum< ::qbo_arduqbo::TorqueEnableResponse>
{
  static const char* value()
  {
    return MD5Sum< ::qbo_arduqbo::TorqueEnable >::value();
  }
  static const char* value(const ::qbo_arduqbo::TorqueEnableResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::qbo_arduqbo::TorqueEnableResponse> should match 
// service_traits::DataType< ::qbo_arduqbo::TorqueEnable > 
template<>
struct DataType< ::qbo_arduqbo::TorqueEnableResponse>
{
  static const char* value()
  {
    return DataType< ::qbo_arduqbo::TorqueEnable >::value();
  }
  static const char* value(const ::qbo_arduqbo::TorqueEnableResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // QBO_ARDUQBO_MESSAGE_TORQUEENABLE_H
