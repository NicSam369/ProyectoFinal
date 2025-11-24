#ifndef CUENTA_H
#define CUENTA_H
#include "String_.h"

class Cuenta
{
	public:
	     Cuenta();
		 Cuenta(char numCuenta_[20],int idUsuario, double saldoInicial);
         void depositar(double monto);
		 virtual bool retirar (double monto);
		 virtual void mostrarDatos() const;
		 double getSaldo();
		 void setType(int type);
         ~Cuenta();

	protected:
         char numCuenta[20];
		 int id;
		 double saldo;
		 int tipo;

};
 #endif // CUENTA.H
