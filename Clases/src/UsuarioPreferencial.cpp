#include "UsuarioPreferencial.h"

UsuarioPreferencial::UsuarioPreferencial(const char *DNIpas,String_ name, String_ contra, String_ email)
{
    setDNI(DNIpas);
    setnombre(name);
    setPasword(contra);
    setCorreo(email);
    setType(1);
}


UsuarioPreferencial::~UsuarioPreferencial()
{
    //dtor
}
