#ifndef TRANSACCION_H
#define TRANSACCION_H

#include <iostream>
using namespace std;

class Transaccion
{
public:
    Transaccion();
    Transaccion(int tipoTrans, double montoTrans, int idUsuarioTrans, const char numCuentaTrans[20]);

    virtual void mostrar() const;                

    int getTipo() const;
    double getMonto() const;
    int getIdUsuario() const;
    const char* getNumCuenta() const;           

    void setTipo(int tipoTrans);
    void setMonto(double montoTrans);
    void setIdUsuario(int idUsuarioTrans);
    void setNumCuenta(const char* numCuentaTrans);

    virtual ~Transaccion();

protected:
    int tipo;
    double monto;
    int idUsuario;
    char numCuenta[20];
};

#endif
