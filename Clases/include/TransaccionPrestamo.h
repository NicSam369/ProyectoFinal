#ifndef TRANSACCIONPRESTAMO_H
#define TRANSACCIONPRESTAMO_H
#include "Transaccion.h"
#include "String_.h"
#include <iostream>
using namespace std;

class TransaccionPrestamo: public Transaccion {
    protected:
        int plazoMeses;
        double tasaInteres;
        double cuotaMensual;
        String_ tipoPrestamo;

    public:
        TransaccionPrestamo();
        TransaccionPrestamo(int tipo, double monto, int idUsuario,
                           char numCuenta[20], int plazoMeses, double tasaInteres,
                           double cuotaMensual, String_ tipoPrestamo)

        void mostrar() const override;

        ~TransaccionPrestamo();
};
#endif

