#ifndef TRANSACCIONRETIRO_H
#define TRANSACCIONRETIRO_H
#include "Transaccion.h"
#include "String_.h"
#include <iostream>
using namespace std;

class TransaccionRetiro: public Transaccion {
    protected:
        String_ tipoRetiro;

    public:
        TransaccionRetiro();
        TransaccionRetiro(int tipo, double monto, int idUsuario, char numCuenta[20], String_ tipoRetiro)
            : Transaccion(tipo, monto, idUsuario, numCuenta)
        {
            this->tipoRetiro = tipoRetiro;
        }

        String_ gettipoRetiro(){
            return tipoRetiro;
        }

        void settipoRetiro(String_ tipoRetiro){
            this->tipoRetiro = tipoRetiro;
        }

        void mostrarRetiro(){
            mostrarTransaccion();
            cout << "Retiro: " << tipoRetiro.str_ << endl;
        }

        ~TransaccionRetiro();
};
#endif

