#ifndef CREDIBANCO_H
#define CREDIBANCO_H
#include "Listas.h"
#include "Usuario.h"
#include "String_.h"


class Credibanco {

    protected:

        double credito_banco;
        Listas Lista;
    public:
        Credibanco();

        void mostrar_credito_banco() ;
        String_ obtenerNumeroCuenta() const;
        void AgregarUsuario(Usuario * o);
        void MostrarUsuarios();

        void infoUusario(int id);
        void infoCuenta(int id);
        void infoTransaccion(int id);


        // Método virtual para extender en clases hijas
        void caratula() ;
        ~Credibanco();
};

#endif






