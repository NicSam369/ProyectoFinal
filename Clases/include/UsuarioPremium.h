#ifndef USUARIOPREMIUM_H
#define USUARIOPREMIUM_H
#include "Usuario.h"


class UsuarioPremium : public Usuario
{
    public:
        UsuarioPremium(const char *DNIpas,String_ name, String_ contra, String_ email, int IDu);
        ~UsuarioPremium();

    protected:

    private:
};

#endif // USUARIOPREMIUM_H
