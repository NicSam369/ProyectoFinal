#ifndef CUENTACREDITO_H
#define CUENTACREDITO_H
#include "Cuenta.h"

class CuentaCredito : public Cuenta
{
    public:
       CuentaCredito();
       CuentaCredito(char numCuenta_[20], int idUsuario, double saldoInicial, double limtite);

       bool retirar(double monto) override;
       void mostrarDatos() const override;

       ~CuentaCredito();
    protected:
       double limiteCredito; //con lo que nos de el banco dependiendo a la cuenta
};

#endif // CUENTA_CREDITO_H

