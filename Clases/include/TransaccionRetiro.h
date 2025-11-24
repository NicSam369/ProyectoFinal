#ifndef TRANSACCIONRETIRO_H
#define TRANSACCIONRETIRO_H
#include "Transaccion.h"
#include "String_.h"
#include <iostream>
using namespace std;

class TransaccionRetiro: public Transaccion {
    protected:
        String_ tipoRetiro;

    public:
        TransaccionRetiro();
        TransaccionRetiro(int tipo, double monto, int idUsuario, char numCuenta[20], String_ tipoRetiro)

        void mostrar() const override;

        ~TransaccionRetiro();
};
#endif


