
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_security_auth_login_LoginException__
#define __javax_security_auth_login_LoginException__

#pragma interface

#include <java/security/GeneralSecurityException.h>
extern "Java"
{
  namespace javax
  {
    namespace security
    {
      namespace auth
      {
        namespace login
        {
            class LoginException;
        }
      }
    }
  }
}

class javax::security::auth::login::LoginException : public ::java::security::GeneralSecurityException
{

public:
  LoginException();
  LoginException(::java::lang::String *);
private:
  static const jlong serialVersionUID = -4679091624035232488LL;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_security_auth_login_LoginException__
