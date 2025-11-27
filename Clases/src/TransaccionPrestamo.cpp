#include "TransaccionPrestamo.h"
#include <iostream>
using namespace std;

TransaccionPrestamo::TransaccionPrestamo() : Transaccion() {
    plazoMeses = 0;
    tasaInteres = 0.0;
    cuotaMensual = 0.0;
    tipoCliente = 0;
}

double TransaccionPrestamo::calcularTasa(int tipoCliente) const {
    if (tipoCliente == 3) {
        return 0.08;
    } else if (tipoCliente == 2) {
        return 0.12;
    } else if (tipoCliente == 1) {
        return 0.16;
    } else {
        return 0.20;
    }
}

TransaccionPrestamo::~TransaccionPrestamo() {
}
