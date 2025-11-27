#ifndef USUARIO_H
#define USUARIO_H
#include "String_.h"

//recordatorio de poner const

class Usuario
{
    public:
        Usuario();
        Usuario(const char *DNIpas,String_ name, String_ contra, String_ email);

        void print();

        int getID();
        char* getName()const;
        char* getDNI() ;
        char* getpasword() const;
        int getTipo() const;
        char* getCorreo() const;
        int GetNumeroCuentas();

        void setDNI(const char *arr);
        void setnombre(const String_& name);
        void setPasword(const String_& contra);
        void setCorreo(const String_& email);
        void setid(int inid);
        void setType(int type);
        void setCuentas(int cantidadCuentas);

        void CambiarPasword(char NuevoPasword[]);
        void CambiarCorreo(char NuevoCorreo[]);
        bool VerificarPasword(String_ nuevopasword);
        virtual ~Usuario();

    protected:
        char DNI[9];
        String_ nombre;
        int id;
        String_ pasword;
        int tipoUsuario;
        String_ correo;
        int NumeroCuentas;
        double CreditoInicial;


};

#endif // USUARIO_H
