#ifndef GESTORDEARCHIVOS_H
#define GESTORDEARCHIVOS_H
#include "Usuario.h"

class GestorDeArchivos
{
    public:
        GestorDeArchivos();
        //void AgregarCuentas(Cuenta o);
        void AgregarUsuario(Usuario o);
        void printUsuarios() const;
        void infoU(int num);
        //void AgregarTransaccion(Transaccion o);
        ~GestorDeArchivos();

    private:
        //char * GuardarCuentas;
        //int espacioC;
        Usuario *GuardarUsuarios;
        int espacioU;
        //char * Transacciones;
        //int espacioT;
};

#endif // GESTORDEARCHIVOS_H
