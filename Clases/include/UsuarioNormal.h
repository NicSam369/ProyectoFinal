#ifndef USUARIONORMAL_H
#define USUARIONORMAL_H
#include "Usuario.h"

class UsuarioNormal : public Usuario
{
    public:
        UsuarioNormal(char DNIpas[9], String_ name, String_ contra, String_ email);
        ~UsuarioNormal();

    protected:

    private:
};

#endif // USUARIONORMAL_H
