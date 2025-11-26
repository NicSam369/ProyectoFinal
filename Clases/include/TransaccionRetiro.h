#ifndef TRANSACCIONRETIRO_H
#define TRANSACCIONRETIRO_H
#include "Transaccion.h"
#include "String_.h"
#include <iostream>

class TransaccionRetiro : public Transaccion
{
protected:
    String_ tipoRetiro;

public:
    TransaccionRetiro();

    TransaccionRetiro(int tipo, double monto, int idUsuario,
                      const char numCuenta[20],
                      String_ tipoRetiro)
        : Transaccion(tipo, monto, idUsuario, numCuenta)
    {
        this->tipoRetiro = tipoRetiro;
    }

    virtual void mostrar() const override {
        Transaccion::mostrar();
        cout << "Retiro: "; tipoRetiro.print();
        cout << endl;
    }

    virtual ~TransaccionRetiro();
};

#endif



