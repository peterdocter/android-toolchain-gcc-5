
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_RenderingHints$KeyImpl__
#define __java_awt_RenderingHints$KeyImpl__

#pragma interface

#include <java/awt/RenderingHints$Key.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class RenderingHints$KeyImpl;
    }
  }
}

class java::awt::RenderingHints$KeyImpl : public ::java::awt::RenderingHints$Key
{

public: // actually package-private
  RenderingHints$KeyImpl(jint, ::java::lang::String *, ::java::lang::Object *, ::java::lang::Object *, ::java::lang::Object *);
public:
  jboolean isCompatibleValue(::java::lang::Object *);
  ::java::lang::String * toString();
public: // actually package-private
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::awt::RenderingHints$Key)))) description;
  ::java::lang::Object * v1;
  ::java::lang::Object * v2;
  ::java::lang::Object * v3;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_RenderingHints$KeyImpl__
