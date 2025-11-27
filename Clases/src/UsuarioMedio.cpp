#include "UsuarioMedio.h"

UsuarioMedio::UsuarioMedio(const char *DNIpas,String_ name, String_ contra, String_ email)
{
    setDNI(DNIpas);
    setnombre(name);
    setPasword(contra);
    setCorreo(email);
    setType(1);
}


UsuarioMedio::~UsuarioMedio()
{
    //dtor
}
