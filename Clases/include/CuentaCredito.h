#ifndef CUENTACREDITO_H
#define CUENTACREDITO_H
#include "Cuenta.h"

class CuentaCredito : public Cuenta
{
    public:
       CuentaCredito(char numCuenta_[20], int idUsuario, double saldoInicial, double deudaActual, double Interes);

       bool retirar(double monto) override;
       void mostrarDatos() const override;
       void aplicarInteres();

    protected:
        double deuda(); //DEUDA ACTUAL

   //   double limiteCredito; //con lo que nos de el banco dependiendo a la cuenta

};

#endif // CUENTA_CREDITO_H

