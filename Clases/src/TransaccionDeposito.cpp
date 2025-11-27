#include "TransaccionDeposito.h"
#include <iostream>
using namespace std;

TransaccionDeposito::TransaccionDeposito() : Transaccion() {
    for(int i = 0; i < 20; i++) {
        numCuentaOrigen[i] = '0';
    }
}

TransaccionDeposito::~TransaccionDeposito() {
}
