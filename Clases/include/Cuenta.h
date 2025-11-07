#ifndef CUENTA.H
#define CUENTA.H
#include "String_.h"

class Cuenta
{
	public:
	     Cuenta();
		 Cuenta(int numCuenta[20])
		 void print();
		 Cuenta(double saldo);
		 
		 
	private:
         int numCuenta[20];
		 int idUsuario;
		 double saldo;

}
 #endif // CUENTA.H
