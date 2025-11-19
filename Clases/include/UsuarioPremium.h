#ifndef USUARIOPREMIUM_H
#define USUARIOPREMIUM_H
#include "Usuario.h"


class UsuarioPremium : public Usuario
{
    public:
        UsuarioPremium(char DNIpas[9],String_ name, String_ contra, String_ email);
        ~UsuarioPremium();

    protected:

    private:
};

#endif // USUARIOPREMIUM_H
