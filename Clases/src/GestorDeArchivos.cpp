#include "GestorDeArchivos.h"
#include <iostream>
GestorDeArchivos::GestorDeArchivos()
{
    //GuardarCuentas = nullptr;
    //espacioC=0;
    GuardarUsuarios=nullptr;
    espacioU=0;
    //Transacciones=nullptr;
    //espacioT=0;
}
//void GestorDeArchivos::AgregarCuenta(Cuenta o){

//}
void GestorDeArchivos::AgregarUsuario(Usuario o){
    if(this-> GuardarUsuarios == nullptr){
        this ->espacioU=1;
        this ->GuardarUsuarios=new Usuario[espacioU];
        GuardarUsuarios[espacioU-1] = o;
    } else {
        Usuario * tmpUsuario= new Usuario [espacioU+1];
        for(int i=0; i < espacioU;i++){
            tmpUsuario[i]=GuardarUsuarios[i];
        }
        tmpUsuario[espacioU+1]= o;
        delete []GuardarUsuarios;
        GuardarUsuarios = nullptr;
        GuardarUsuarios= tmpUsuario;
        this->espacioU=this->espacioU+1;
        }
}

void GestorDeArchivos:: infoU(int num){

}

void GestorDeArchivos:: printUsuarios() const{
    std::cout << std::endl;
    for(int i =0; i < espacioU; i++){
        GuardarUsuarios[i].print();
    }

}
//void GestorDeArchivos::AgregarTransaccion(Transaccion o){

//}

GestorDeArchivos::~GestorDeArchivos()
{
    //dtor
}
