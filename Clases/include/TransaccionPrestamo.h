#ifndef TRANSACCIONPRESTAMO_H
#define TRANSACCIONPRESTAMO_H
#include "Transaccion.h"
#include "String_.h"
#include <iostream>
using namespace std;

class TransaccionPrestamo : public Transaccion {
protected:
    int plazoMeses;
    double tasaInteres;
    double cuotaMensual;
    String_ tipoPrestamo;
    int tipoCliente;

    double calcularTasa(int tipoCliente) const;

public:
    TransaccionPrestamo();

    TransaccionPrestamo(int tipo, double monto, int idUsuario, const char numCuenta[20],
                        int plazoMeses, double cuotaMensual, String_ tipoPrestamo,
                        int tipoCliente)
        : Transaccion(tipo, monto, idUsuario, numCuenta)
    {
        this->plazoMeses = plazoMeses;
        this->cuotaMensual = cuotaMensual;
        this->tipoPrestamo = tipoPrestamo;
        this->tipoCliente = tipoCliente;
        this->tasaInteres = calcularTasa(tipoCliente);
    }

    virtual void mostrar() const override {
        Transaccion::mostrar();
        cout << "Prestamo: "; tipoPrestamo.print();
        cout << "\nCliente Tipo: " << tipoCliente;
        cout << "\nPlazo: " << plazoMeses << " meses";
        cout << "\nTasa interes: " << tasaInteres * 100.0 << "% anual";
        cout << "\nCuota mensual: " << cuotaMensual << endl;
    }

    virtual ~TransaccionPrestamo();
};

#endif
