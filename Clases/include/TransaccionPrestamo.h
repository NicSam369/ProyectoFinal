#ifndef TRANSACCIONPRESTAMO_H
#define TRANSACCIONPRESTAMO_H
#include "Transaccion.h"
#include "String_.h"
#include <iostream>

class TransaccionPrestamo : public Transaccion
{
protected:
    int plazoMeses;
    double tasaInteres;
    double cuotaMensual;
    String_ tipoPrestamo;

public:
    TransaccionPrestamo();

    TransaccionPrestamo(int tipo, double monto, int idUsuario,
                        const char numCuenta[20],
                        int plazoMeses, double tasaInteres,
                        double cuotaMensual, String_ tipoPrestamo)
        : Transaccion(tipo, monto, idUsuario, numCuenta)
    {
        this->plazoMeses = plazoMeses;
        this->tasaInteres = tasaInteres;
        this->cuotaMensual = cuotaMensual;
        this->tipoPrestamo = tipoPrestamo;
    }

    virtual void mostrar() const override {
        Transaccion::mostrar();
        cout << "Prestamo: "; tipoPrestamo.print();
        cout << "\nPlazo: " << plazoMeses
             << "\nTasa interes: " << tasaInteres
             << "\nCuota mensual: " << cuotaMensual << endl;
    }

    virtual ~TransaccionPrestamo();
};

#endif



