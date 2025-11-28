#include "UsuarioPremium.h"

UsuarioPremium::UsuarioPremium(const char *DNIpas,String_ name, String_ contra, String_ email, int IDu)
        :Usuario(DNIpas, name,contra,email,IDu)
{
    setType(2);
}

UsuarioPremium::~UsuarioPremium()
{
    //dtor
}
