#ifndef TRANSACCIONDEPOSITO_H
#define TRANSACCIONDEPOSITO_H
#include "Transaccion.h"
#include "String_.h"
#include <iostream>

using namespace std;

class TransaccionDeposito: public Transaccion {
	protected:
        String_ tipoDeposito;
        String_ depositante;
    public:
        TransaccionDeposito();
		TransaccionDeposito(int tipo, double monto, int idUsuario, char numCuenta[20], String_ tipoDeposito, String_ depositante)

		void mostrar() const override;

		~TransaccionDeposito();
};

#endif

