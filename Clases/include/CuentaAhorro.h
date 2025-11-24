#ifndef CUENTAAHORRO_H
#define CUENTAAHORRO_H
#include "Cuenta.h"

class CuentaAhorro : public Cuenta
{
    public:
        CuentaAhorro();
        bool retirar(double monto) override;
        void mostrarDatos() const override;
        ~CuentaAhorro();
};

#endif // CUENTAAHORRO_H
