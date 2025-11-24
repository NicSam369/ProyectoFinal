#ifndef CUENTA_H
#define CUENTA_H
#include "String_.h"

class Cuenta
{
	public:
	     Cuenta();
		 Cuenta(char numCuenta_[20],int idUsuario, double saldoInicial);
		 virtual void depositar(double monto);
		 virtual bool retirar (double monto);
		 virtual void mostrarDatos() const;
		 double getSaldo();


	protected:
         char numCuenta[20];
		 int id;
		 double saldo;
		 double Interes;



};
 #endif // CUENTA.H

