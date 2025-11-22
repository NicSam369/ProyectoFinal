#ifndef TRANSACCIONDEPOSITO_H
#define TRANSACCIONDEPOSITO_H
#include "Transaccion.hpp"
#include "String_.hpp"
#include <iostream>

using namespace std;

class TransaccionDeposito: public Transaccion {
	protected:                   
        String_ tipoDeposito;        
        String_ depositante;
    public:
		TransaccionDeposito(int tipo, double monto, int idUsuario, char numCuenta[20], String_ tipoDeposito, String_ depositante)
			:Transaccion(tipo, monto, idUsuario, numCuenta)
		{
			this->tipoDeposito = tipoDeposito;
			this->depositante = depositante;
		}
		
		String_ gettipoDeposito(){
			return tipoDeposito;
		}
		
		String_ getdepositante(){
			return depositante;
		}
		
		void settipoDeposito(String_ tipoDeposito){
			this-> tipoDeposito = tipoDeposito;
		}
		
		void setdepositante(String_ depositante){
			this->depositante = depositante;
		}
		
		void mostrarDeposito(){
			mostrarTransaccion();
			cout << "Deposito: " << tipoDeposito << endl;
			cout << "Depositante: " << depositante << endl;
		}
		
		~TransaccionDeposito();
};

#endif
