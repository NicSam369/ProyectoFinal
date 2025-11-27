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
		 int getType();
		 void setSaldo(int saldoinicial);
		 void setType(int type);

         virtual ~Cuenta();

//hay un warning para aca por eso se le agrego virtual al destructor
//D:\ProyectoFinal\Clases\src\Listas.cpp|272|warning:
//deleting object of polymorphic class type 'Cuenta' which has non-virtual
//destructor might cause undefined behavior [-Wdelete-non-virtual-dtor]|

	protected:
         char numCuenta[20];
		 int id;
		 double saldo;
		 int tipo;



};
 #endif // CUENTA.H
