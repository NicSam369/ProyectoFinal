#ifndef TRANSACCIONPRESTAMO_H
#define TRANSACCIONPRESTAMO_H
#include "Transaccion.h"
#include "String_.h"
#include <iostream>
using namespace std;

class TransaccionPrestamo: public Transaccion {
    protected:
        int plazoMeses;
        double tasaInteres;
        double cuotaMensual;
        String_ tipoPrestamo;

    public:
        TransaccionPrestamo();
        TransaccionPrestamo(int tipo, double monto, int idUsuario,
                           char numCuenta[20], int plazoMeses, double tasaInteres,
                           double cuotaMensual, String_ tipoPrestamo)
            : Transaccion(tipo, monto, idUsuario, numCuenta)
        {
            this->plazoMeses = plazoMeses;
            this->tasaInteres = tasaInteres;
            this->cuotaMensual = cuotaMensual;
            this->tipoPrestamo = tipoPrestamo;
        }

        int getplazoMeses(){
            return plazoMeses;
        }

        double gettasaInteres(){
            return tasaInteres;
        }

        double getcuotaMensual(){
            return cuotaMensual;
        }

        String_ gettipoPrestamo(){
            return tipoPrestamo;
        }

        void setplazoMeses(int plazoMeses){
            this->plazoMeses = plazoMeses;
        }

        void settasaInteres(double tasaInteres){
            this->tasaInteres = tasaInteres;
        }

        void setcuotaMensual(double cuotaMensual){
            this->cuotaMensual = cuotaMensual;
        }

        void settipoPrestamo(String_ tipoPrestamo){
            this->tipoPrestamo = tipoPrestamo;
        }

        void mostrarPrestamo(){
            mostrarTransaccion();
            cout << "Prestamo: " << tipoPrestamo.str_ << endl;
            cout << "Plazo: " << plazoMeses << endl;
            cout << "Tasa Interes: " << tasaInteres << endl;
            cout << "Cuota Mensual: " << cuotaMensual << endl;
        }

        ~TransaccionPrestamo();
};
#endif
