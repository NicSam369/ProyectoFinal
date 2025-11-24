#include "Cuenta.h"
#include <iostream>

Cuenta::Cuenta()
{

}

Cuenta::Cuenta(char numCuenta_[20],int idUsuario, double saldoInicial)
{
    for(int i = 0; i<20; i++)
    {
        numCuenta[i] = numCuenta_[i];
    }
    id = idUsuario;
    saldo = saldoInicial;
}

void Cuenta::depositar(double monto)
{
   if (monto > 0) {
        saldo += monto;
        std::cout << "Deposito exitoso"<< std::endl <<"Nuevo saldo: " << saldo << std::endl;
    } else {
        std::cout << "Error: el monto debe ser mayor que cero." << std::endl;
    }
}

bool Cuenta::retirar(double monto)
{
    if (monto <= 0)
    {
        std::cout << "Monto no valido" << std::endl;
        return false;
    }

    if (monto > saldo)
    {
        std::cout << "Saldo insuficiente" << std::endl;
        return false;
    }

    saldo = saldo - monto;
    return true;
}

void Cuenta::mostrarDatos() const
{
    std::cout<<"El numero de cuenta es: ";
    for(int i = 0; i<20; i++)
    {
        std::cout<<numCuenta[i];
    }
    std::cout<<"\n El ID es: " << id << std::endl;
    std::cout<<"El saldo actual es: " << saldo << std::endl;
}

void Cuenta::setType(int type){
    if(type == 0){
        tipo=1;
    } else if(type==1){
        tipo=2;
    } else {
        tipo=3;
    }

}

double Cuenta::getSaldo()
{
    return saldo;
}
Cuenta::~Cuenta()
{

}
