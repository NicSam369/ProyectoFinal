#ifndef LISTAS_H
#define LISTAS_H
#include "Cuenta.h"
#include "Usuario.h"
#include "Transaccion.h"

class Listas
{
     public:
        Listas();
        void AgregarCuentas(Cuenta* o);
        void printCuentas() const;
        void AgregarUsuario(Usuario* o);
        void printUsuarios() const;
        void AgregarTransaccion(Transaccion* o);
        void printTransacciones() const;
        void printU(int id) const;
        void printC(int id) const;
        void printT(int id) const;

        void borrarCuenta(Cuenta* o);
        void borrarUsuario(Usuario* o);
        void borrarTransaccion(Transaccion* o);

        ~Listas();

    protected:
        Cuenta *** GuardarCuentas;
        int espacioC;
        Usuario ***GuardarUsuarios;
        int espacioU;
        Transaccion *** GuardarTransacciones;
        int espacioT;

};

#endif // LISTAS_H
