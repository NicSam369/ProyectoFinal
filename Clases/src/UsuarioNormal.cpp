#include "UsuarioNormal.h"

UsuarioNormal::UsuarioNormal(const char *DNIpas,String_ name, String_ contra, String_ email)
{
    setDNI(DNIpas);
    setnombre(name);
    setPasword(contra);
    setCorreo(email);
    setType(0);
}


UsuarioNormal::~UsuarioNormal()
{
    //dtor
}
