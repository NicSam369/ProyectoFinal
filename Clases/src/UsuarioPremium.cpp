#include "UsuarioPremium.h"

UsuarioPremium::UsuarioPremium(const char *DNIpas,String_ name, String_ contra, String_ email)
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
