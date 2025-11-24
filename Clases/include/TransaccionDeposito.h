#ifndef TRANSACCIONDEPOSITO_H
#define TRANSACCIONDEPOSITO_H
#include "Transaccion.h"
#include "String_.h"
#include <iostream>

class TransaccionDeposito : public Transaccion
{
protected:
    String_ tipoDeposito;
    String_ depositante;

public:
    TransaccionDeposito();

    TransaccionDeposito(int tipo, double monto, int idUsuario,
                        const char numCuenta[20],
                        String_ tipoDeposito, String_ depositante)
        : Transaccion(tipo, monto, idUsuario, numCuenta)
    {
        this->tipoDeposito = tipoDeposito;
        this->depositante = depositante;
    }

     void mostrar() const override {
        cout << "Tipo de deposito: "; tipoDeposito.print();
        cout << "Depositante: "; depositante.print();
        cout << endl;
    }

    virtual ~TransaccionDeposito();
};

#endif



