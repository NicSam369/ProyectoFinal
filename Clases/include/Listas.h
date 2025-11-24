#ifndef LISTAS_H
#define LISTAS_H
#include "Cuenta.h"
#include "Usuario.h"
#include "Transaccion.h"

class Listas
{
     public:
        Listas();
        void AgregarCuentas(Cuenta o);
        void AgregarUsuario(Usuario* o);
        void printUsuarios() const;
        void AgregarTransaccion(Transaccion o);
        void infoUusario(int num);
        void infoCuenta(int num);
        void infoTransaccion(int num);
        ~Listas();

    protected:
        Cuenta ** GuardarCuentas;
        int espacioC;
        Usuario **GuardarUsuarios;
        int espacioU;
        Transaccion ** Transacciones;
        int espacioT;

};

#endif // LISTAS_H
