#ifndef TRANSACCIONDEPOSITO_H
#define TRANSACCIONDEPOSITO_H
#include "Transaccion.h"
#include "String_.h"
#include <iostream>
using namespace std;

class TransaccionDeposito : public Transaccion {
protected:
    String_ tipoDeposito;
    String_ depositante;
    char numCuentaOrigen[20];

public:
    TransaccionDeposito();

    TransaccionDeposito(int tipo, double monto, int idUsuario, const char numCuentaDestino[20],
                        String_ tipoDeposito, String_ depositante, const char numCuentaOrigen[20])
        : Transaccion(tipo, monto, idUsuario, numCuentaDestino)
    {
        this->tipoDeposito = tipoDeposito;
        this->depositante = depositante;

        for(int i = 0; i < 20; i++) {
            this->numCuentaOrigen[i] = numCuentaOrigen[i];
        }
    }

    const char* getNumCuentaOrigen() const { return numCuentaOrigen; }

    virtual void mostrar() const override {
        Transaccion::mostrar();
        cout << "Tipo Deposito: "; tipoDeposito.print();
        cout << "Depositante: "; depositante.print();

        cout << "Cuenta Origen (Transferencia): ";
        bool esEfectivo = true;
        for (int i = 0; i < 20; ++i) {
            if (numCuentaOrigen[i] != '0' && numCuentaOrigen[i] != '\0') {
                esEfectivo = false;
                break;
            }
        }

        if (!esEfectivo) {
            cout << numCuentaOrigen << endl;
        } else {
            cout << "(Efectivo o Externo)" << endl;
        }
    }

    virtual ~TransaccionDeposito();
};

#endif
