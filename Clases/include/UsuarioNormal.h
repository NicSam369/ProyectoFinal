#ifndef USUARIONORMAL_H
#define USUARIONORMAL_H
#include "Usuario.h"

class UsuarioNormal : public Usuario
{
    public:
        UsuarioNormal(const char *DNIpas, String_ name, String_ contra, String_ email, int IDu);
        //void print() override;
        ~UsuarioNormal();

    protected:

    private:
};

#endif // USUARIONORMAL_H
