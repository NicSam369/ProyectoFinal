#ifndef CUENTAAHORRO_H
#define CUENTAAHORRO_H
#include "Cuenta.h"

class CuentaAhorro : public Cuenta
{
    public:
        CuentaAhorro(int numero, int idUsuario, double _interes, double _saldo);
        void aplicarInteres();
        void mostrarDatos() const override;



};
#endif // CUENTAAHORRO_H
