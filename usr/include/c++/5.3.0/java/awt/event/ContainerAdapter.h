
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_event_ContainerAdapter__
#define __java_awt_event_ContainerAdapter__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
          class ContainerAdapter;
          class ContainerEvent;
      }
    }
  }
}

class java::awt::event::ContainerAdapter : public ::java::lang::Object
{

public:
  ContainerAdapter();
  virtual void componentAdded(::java::awt::event::ContainerEvent *);
  virtual void componentRemoved(::java::awt::event::ContainerEvent *);
  static ::java::lang::Class class$;
};

#endif // __java_awt_event_ContainerAdapter__