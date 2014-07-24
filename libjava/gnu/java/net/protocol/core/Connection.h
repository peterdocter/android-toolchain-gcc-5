
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_protocol_core_Connection__
#define __gnu_java_net_protocol_core_Connection__

#pragma interface

#include <java/net/URLConnection.h>
extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
        class Core;
    }
    namespace java
    {
      namespace net
      {
        namespace protocol
        {
          namespace core
          {
              class Connection;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace net
    {
        class URL;
    }
  }
}

class gnu::java::net::protocol::core::Connection : public ::java::net::URLConnection
{

public:
  Connection(::java::net::URL *);
  virtual void connect();
  virtual ::java::io::InputStream * getInputStream();
  virtual ::java::lang::String * getHeaderField(::java::lang::String *);
  virtual ::java::util::Map * getHeaderFields();
  virtual ::java::lang::String * getHeaderField(jint);
  virtual ::java::lang::String * getHeaderFieldKey(jint);
private:
  ::java::lang::String * getKey(::java::lang::String *);
  ::java::lang::String * getField(::java::lang::String *);
  void getHeaders();
  ::java::util::Hashtable * __attribute__((aligned(__alignof__( ::java::net::URLConnection)))) hdrHash;
  ::java::util::Vector * hdrVec;
  jboolean gotHeaders;
  ::gnu::gcj::Core * core;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_net_protocol_core_Connection__
