#ifndef TRANSACCION_H
#define TRANSACCION_H
#include "String_.hpp"

class Transaccion
{
    public:
        Transaccion();
        Transaccion(int tipoTrans, double montoTrans, int idUsuarioTrans, char numCuentaTrans[20]);
        
        void mostrarTransaccion() const;
        
        int getTipo() const;
        double getMonto() const;
        int getIdUsuario() const;
        char* getNumCuenta();
        
        void setTipo(int tipoTrans);
        void setMonto(double montoTrans);
        void setIdUsuario(int idUsuarioTrans);
        void setNumCuenta(char numCuentaTrans[20]);
        
        ~Transaccion();
        
    protected:
        int tipo;
        double monto;
        int idUsuario;
        char numCuenta[20];
};

#endif
