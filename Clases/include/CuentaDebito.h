#ifndef CUENTADEBITO_H
#define CUENTADEBITO_H
#include "Cuenta.h"

class CuentaDebito : public Cuenta
{
    public:
         CuentaDebito();
         CuentaDebito(char numCuenta_[20], char DNI[9], double saldoInicial);
        bool retirar(double monto) override;
       void mostrarDatos() const override;

         ~CuentaDebito();

};

#endif //CUENTADEBITO_H
