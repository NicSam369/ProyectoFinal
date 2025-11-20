#ifndef CUENTA_CREDITO_H
#define CUENTA_CREDITO_H
#include "Cuenta_h"

class CuentaCredito : public Cuenta 
{
    public:
       CuentaCredito(char numCuenta_[20], int idUsuario, double saldoInicial, double limtite); 

       bool retirar(double monto) override;
       void mostrarDatos() const override;
    protected:
       double limiteCredito; //con lo que nos de el banco dependiendo a la cuenta
};

#endif // CUENTA_CREDITO_H
