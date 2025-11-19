#ifndef USUARIOPREFERENCIAL_H
#define USUARIOPREFERENCIAL_H
#include "Usuario.h"

class UsuarioPreferencial : public Usuario
{
    public:
        UsuarioPreferencial(char DNIpas[9],String_ name, String_ contra, String_ email);
        ~UsuarioPreferencial();

    protected:

    private:
};

#endif // USUARIOPREFERENCIAL_H
