// Generated by gencpp from file qbo_arduqbo/Test.msg
// DO NOT EDIT!


#ifndef QBO_ARDUQBO_MESSAGE_TEST_H
#define QBO_ARDUQBO_MESSAGE_TEST_H

#include <ros/service_traits.h>


#include <qbo_arduqbo/TestRequest.h>
#include <qbo_arduqbo/TestResponse.h>


namespace qbo_arduqbo
{

struct Test
{

typedef TestRequest Request;
typedef TestResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Test
} // namespace qbo_arduqbo


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::qbo_arduqbo::Test > {
  static const char* value()
  {
    return "6f8d7da5192e662dd9f7974027b7e5ee";
  }

  static const char* value(const ::qbo_arduqbo::Test&) { return value(); }
};

template<>
struct DataType< ::qbo_arduqbo::Test > {
  static const char* value()
  {
    return "qbo_arduqbo/Test";
  }

  static const char* value(const ::qbo_arduqbo::Test&) { return value(); }
};


// service_traits::MD5Sum< ::qbo_arduqbo::TestRequest> should match 
// service_traits::MD5Sum< ::qbo_arduqbo::Test > 
template<>
struct MD5Sum< ::qbo_arduqbo::TestRequest>
{
  static const char* value()
  {
    return MD5Sum< ::qbo_arduqbo::Test >::value();
  }
  static const char* value(const ::qbo_arduqbo::TestRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::qbo_arduqbo::TestRequest> should match 
// service_traits::DataType< ::qbo_arduqbo::Test > 
template<>
struct DataType< ::qbo_arduqbo::TestRequest>
{
  static const char* value()
  {
    return DataType< ::qbo_arduqbo::Test >::value();
  }
  static const char* value(const ::qbo_arduqbo::TestRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::qbo_arduqbo::TestResponse> should match 
// service_traits::MD5Sum< ::qbo_arduqbo::Test > 
template<>
struct MD5Sum< ::qbo_arduqbo::TestResponse>
{
  static const char* value()
  {
    return MD5Sum< ::qbo_arduqbo::Test >::value();
  }
  static const char* value(const ::qbo_arduqbo::TestResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::qbo_arduqbo::TestResponse> should match 
// service_traits::DataType< ::qbo_arduqbo::Test > 
template<>
struct DataType< ::qbo_arduqbo::TestResponse>
{
  static const char* value()
  {
    return DataType< ::qbo_arduqbo::Test >::value();
  }
  static const char* value(const ::qbo_arduqbo::TestResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // QBO_ARDUQBO_MESSAGE_TEST_H