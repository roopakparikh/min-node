
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_print_attribute_standard_Fidelity__
#define __javax_print_attribute_standard_Fidelity__

#pragma interface

#include <javax/print/attribute/EnumSyntax.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
          class EnumSyntax;
        namespace standard
        {
            class Fidelity;
        }
      }
    }
  }
}

class javax::print::attribute::standard::Fidelity : public ::javax::print::attribute::EnumSyntax
{

public: // actually protected
  Fidelity(jint);
public:
  ::java::lang::Class * getCategory();
  ::java::lang::String * getName();
public: // actually protected
  JArray< ::java::lang::String * > * getStringTable();
  JArray< ::javax::print::attribute::EnumSyntax * > * getEnumValueTable();
private:
  static const jlong serialVersionUID = 6320827847329172308LL;
public:
  static ::javax::print::attribute::standard::Fidelity * FIDELITY_TRUE;
  static ::javax::print::attribute::standard::Fidelity * FIDELITY_FALSE;
private:
  static JArray< ::java::lang::String * > * stringTable;
  static JArray< ::javax::print::attribute::standard::Fidelity * > * enumValueTable;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_print_attribute_standard_Fidelity__
