#ifndef CUENTA_DEBITO_H
#define CUENTA_DEBITO_H
#include "Cuenta.h"

class CuentaDebito : public Cuenta 
{
    public:
         CuentaDebito(char numCuenta_[20], char DNI[9], double saldoInicial);

         void mostrarDatos() const override;
};

#endif
