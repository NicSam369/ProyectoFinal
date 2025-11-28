#include "UsuarioMedio.h"

UsuarioMedio::UsuarioMedio(const char *DNIpas,String_ name, String_ contra, String_ email, int IDu)
    :Usuario(DNIpas, name,contra,email,IDu)
{
    setType(1);
}


UsuarioMedio::~UsuarioMedio()
{
    //dtor
}
