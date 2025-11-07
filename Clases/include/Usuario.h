#ifndef USUARIO_H
#define USUARIO_H
#include "String_.h"

class Usuario
{
    public:
        Usuario();
        Usuario(char DNIpas[8],String_ name, String_ contra);
        void print();
        int getID();
        char* getName();
        char* getDNI();
        char* getpasword();
        void CambiarPasword(char *NuevoPasword);
        bool VerificarPasword(String_ nuevopasword);
        ~Usuario();

    private:
        char DNI[8];
        String_ nombre;
        int id;
        String_ pasword;
};

#endif // USUARIO_H
