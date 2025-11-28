#ifndef USUARIOMEDIO_H
#define USUARIOMEDIO_H
#include "Usuario.h"

class UsuarioMedio : public Usuario
{
    public:
        UsuarioMedio(const char *DNIpas,String_ name, String_ contra, String_ email, int IDu);
        ~UsuarioMedio();

    protected:

    private:
};


#endif // USUARIOMEDIO_H
