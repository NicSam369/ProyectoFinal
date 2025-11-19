#include "UsuarioPremium.h"

UsuarioPremium::UsuarioPremium(char DNIpas[9],String_ name, String_ contra, String_ email)
{
    setDNI(DNIpas);
    setnombre(name);
    setPasword(contra);
    setCorreo(email);
    setType(2);
}

UsuarioPremium::~UsuarioPremium()
{
    //dtor
}
