#include "UsuarioPreferencial.h"

UsuarioPreferencial::UsuarioPreferencial(char DNIpas[9],String_ name, String_ contra, String_ email)
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
