#include "UsuarioNormal.h"

UsuarioNormal::UsuarioNormal(const char *DNIpas,String_ name, String_ contra, String_ email, int IDu)
        :Usuario(DNIpas, name,contra,email,IDu)
{
  setType(0);
}


UsuarioNormal::~UsuarioNormal()
{
    //dtor
}
