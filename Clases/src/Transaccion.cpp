#include "Transaccion.h"
#include <iostream>
using namespace std;

Transaccion::Transaccion() {
    tipo = 0;
    monto = 0.0;
    idUsuario = 0;
    for (int i = 0; i < 20; ++i) {
        numCuenta[i] = '0';
    }
}

Transaccion::Transaccion(int tipoTrans, double montoTrans, int idUsuarioTrans, const char numCuentaTrans[20]) {
    tipo = tipoTrans;
    monto = montoTrans;
    idUsuario = idUsuarioTrans;
    for (int i = 0; i < 20; ++i) {
        numCuenta[i] = numCuentaTrans[i];
    }
}

void Transaccion::mostrar() const {
    cout << "          Transaccion          \n";
    cout << "Tipo (1=Deposito, 2=Retiro, 3=Prestamo): " << tipo << endl;
    cout << "Monto: " << monto << endl;
    cout << "ID Usuario: " << idUsuario << endl;
    cout << "Numero de Cuenta Destino/Propia: " << numCuenta << endl;
}

int Transaccion::getTipo() const { return tipo; }
double Transaccion::getMonto() const { return monto; }
int Transaccion::getIdUsuario() const { return idUsuario; }
const char* Transaccion::getNumCuenta() const { return numCuenta; }

void Transaccion::setTipo(int tipoTrans) { tipo = tipoTrans; }
void Transaccion::setMonto(double montoTrans) { monto = montoTrans; }
void Transaccion::setIdUsuario(int idUsuarioTrans) { idUsuario = idUsuarioTrans; }
void Transaccion::setNumCuenta(const char* numCuentaTrans) {
    for (int i = 0; i < 20; ++i) {
        numCuenta[i] = numCuentaTrans[i];
    }
}

Transaccion::~Transaccion() {
}

