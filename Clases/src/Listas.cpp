#include "Listas.h"
#include <iostream>

Listas::Listas()
{
    GuardarUsuarios=nullptr;
    espacioU=0;
}
void Listas::AgregarUsuario(Usuario* o){
    if(o == nullptr){
            return;
    }

    int lugar;
    if(o->getTipo()==1){
        lugar=0;
    } else if (o->getTipo()==2){
        lugar=1;
    } else {
        lugar=2;
    }

    if(GuardarUsuarios == nullptr){
        espacioU=1;
        GuardarUsuarios = new Usuario**[3];
        for(int i =0; i < 3; i++){
            GuardarUsuarios[i] = new Usuario*[espacioU];
            for(int j =0; j < espacioU; j++){
                GuardarUsuarios[i][j]= nullptr;
            }
        }
        GuardarUsuarios[lugar][0]= o;
        return;
    } else {
        Usuario *** tmpUsuario = new Usuario**[3];
        for(int i =0; i < 3; i++){
            tmpUsuario[i] = new Usuario*[espacioU + 1];
            for(int j =0; j < espacioU+1; j++){
                tmpUsuario[i][j]= nullptr;
            }
        }
        for(int i =0; i < 3; i++){
            for(int j = 0; j < espacioU; j++){
                    tmpUsuario[i][j] = GuardarUsuarios[i][j];
            }
        }
        tmpUsuario[lugar][espacioU] = o;
        for(int i = 0; i < 3; i++){
            delete[] GuardarUsuarios[i];
        }
        delete[] GuardarUsuarios;
        GuardarUsuarios = tmpUsuario;
        espacioU++;
    }
}


void Listas::printUsuarios() const {
    std::cout << "Usuarios Premium" << std::endl;
    for(int i = 0; i < 3; i++){
            for(int j = 0; j < espacioU; j++){
                if(i==2 && GuardarUsuarios[i][j] != nullptr){
                    GuardarUsuarios[i][j]->print();
                    //std::cout<<GuardarUsuarios[i][j]->getName();
            }
        }
    }

    std::cout << "Usuarios Medio" << std::endl;
    for(int i = 0; i < 3; i++){
            for(int j = 0; j < espacioU; j++){
                if(i == 1 && GuardarUsuarios[i][j] != nullptr){
                    GuardarUsuarios[i][j]->print();
                    //std::cout<<GuardarUsuarios[i][j]->getName();
            }
        }
    }

    std::cout << "Usuarios Normal" << std::endl;
    for(int i = 0; i < 3; i++){
            for(int j = 0; j < espacioU; j++){
                if(i==0 && GuardarUsuarios[i][j] != nullptr){
                    GuardarUsuarios[i][j]->print();
                    //std::cout<<GuardarUsuarios[i][j]->getName();
            }
        }
    }
}

void Listas::AgregarCuentas(Cuenta* o){
    if(o == nullptr){
            return;
    }

    int lugar;
    if(o->getType()==1){
        lugar=0;
    } else if (o->getType()==2){
        lugar=1;
    } else {
        lugar=2;
    }

    if(GuardarCuentas == nullptr){
        espacioC=1;
        GuardarCuentas = new Cuenta**[3];
        for(int i =0; i < 3; i++){
            GuardarCuentas[i] = new Cuenta*[espacioC];
            for(int j =0; j < espacioC; j++){
                GuardarCuentas[i][j]= nullptr;
            }
        }
        GuardarCuentas[lugar][0]= o;
        return;
    } else {
        Cuenta *** tmpCuenta = new Cuenta**[3];
        for(int i =0; i < 3; i++){
            tmpCuenta[i] = new Cuenta*[espacioC + 1];
            for(int j =0; j < espacioC+1; j++){
                tmpCuenta[i][j]= nullptr;
            }
        }
        for(int i =0; i < 3; i++){
            for(int j = 0; j < espacioC; j++){
                    tmpCuenta[i][j] = GuardarCuentas[i][j];
            }
        }
        tmpCuenta[lugar][espacioC] = o;
        for(int i = 0; i < 3; i++){
            delete[] GuardarCuentas[i];
        }
        delete[] GuardarCuentas;
        GuardarCuentas = tmpCuenta;
        espacioC++;
    }
}


void Listas::printCuentas() const {
    std::cout << "Cuentas -----" << std::endl;
    for(int i = 0; i < 3; i++){
            for(int j = 0; j < espacioC; j++){
                if(i==2 && GuardarCuentas[i][j] != nullptr){
                    GuardarCuentas[i][j]->mostrarDatos();
                    //std::cout<<GuardarUsuarios[i][j]->getName();
            }
        }
    }

    std::cout << "Cuentas -----" << std::endl;
    for(int i = 0; i < 3; i++){
            for(int j = 0; j < espacioC; j++){
                if(i==1 && GuardarCuentas[i][j] != nullptr){
                    GuardarCuentas[i][j]->mostrarDatos();
                    //std::cout<<GuardarUsuarios[i][j]->getName();
            }
        }
    }

    std::cout << "Cuentas -----" << std::endl;
    for(int i = 0; i < 3; i++){
            for(int j = 0; j < espacioC; j++){
                if(i==0 && GuardarCuentas[i][j] != nullptr){
                    GuardarCuentas[i][j]->mostrarDatos();
                    //std::cout<<GuardarUsuarios[i][j]->getName();
            }
        }
    }

}

void Listas::AgregarTransaccion(Transaccion* o){ //revisar fallo del getTipo
    if(o == nullptr){
            return;
    }

    int lugar;
/**
    if(o->getTipo()==1){
        lugar=0;
    } else if (o->getTipo()==2){
        lugar=1;
    } else {
        lugar=2;
    }
*/
    lugar=0; //en transaccion arreglar esto
    //D:\ProyectoFinal\Clases\src\Listas.cpp:179|| undefined reference to `Transaccion::getTipo() const'|
    //D:\code\CodeBlocks\MinGW\bin\..\lib\gcc\x86_64-w64-mingw32\14.2.0\..\..\..\..\x86_64-w64-mingw32\bin\ld.exe: D:\ProyectoFinal\Clases\src\Listas.cpp:181||
    //undefined reference to `Transaccion::getTipo() const'|
    if(GuardarTransacciones == nullptr){
        espacioT=1;
        GuardarTransacciones = new Transaccion**[3];
        for(int i =0; i < 3; i++){
            GuardarTransacciones[i] = new Transaccion*[espacioT];
            for(int j =0; j < espacioT; j++){
                GuardarTransacciones[i][j]= nullptr;
            }
        }
        GuardarTransacciones[lugar][0]= o;
        return;
    } else {
        Transaccion *** tmpTransaccion = new Transaccion**[3];
        for(int i =0; i < 3; i++){
            tmpTransaccion[i] = new Transaccion*[espacioT + 1];
            for(int j =0; j < espacioT+1; j++){
                tmpTransaccion[i][j]= nullptr;
            }
        }
        for(int i =0; i < 3; i++){
            for(int j = 0; j < espacioT; j++){
                    tmpTransaccion[i][j] = GuardarTransacciones[i][j];
            }
        }
        tmpTransaccion[lugar][espacioT] = o;
        for(int i = 0; i < 3; i++){
            delete[] GuardarTransacciones[i];
        }
        delete[] GuardarTransacciones;
        GuardarTransacciones = tmpTransaccion;
        espacioT++;
    }
}


void Listas::printTransacciones() const {
    std::cout << "Transaccion-----" << std::endl;
    for(int i = 0; i < 3; i++){
            for(int j = 0; j < espacioT; j++){
                if(i==2 && GuardarTransacciones[i][j] != nullptr){
                    GuardarTransacciones[i][j]->mostrar();
                    //std::cout<<GuardarUsuarios[i][j]->getName();
            }
        }
    }

    std::cout << "Transaccion-----" << std::endl;
    for(int i = 0; i < 3; i++){
            for(int j = 0; j < espacioT; j++){
                if(i == 1 && GuardarTransacciones[i][j] != nullptr){
                    GuardarTransacciones[i][j]->mostrar();
                    //std::cout<<GuardarUsuarios[i][j]->getName();
            }
        }
    }

    std::cout << "Transaccion-----" << std::endl;
    for(int i = 0; i < 3; i++){
            for(int j = 0; j < espacioT; j++){
                if(i==0 && GuardarTransacciones[i][j] != nullptr){
                    GuardarTransacciones[i][j]->mostrar();
                    //std::cout<<GuardarUsuarios[i][j]->getName();
            }
        }
    }
}

void Listas::borrarCuenta(Cuenta* o)
{
    /**
    if(o == nullptr){
            return;
    }

    int lugar;
    if(o->getType()==1){
        lugar=0;
    } else if (o->getType()==2){
        lugar=1;
    } else {
        lugar=2;
    }

    if(espacioC==1){
        for (int i = 0; i < 3; i++) {
            if (GuardarCuentas[i] != nullptr) {
                    delete GuardarCuentas[i];
                }
            delete[] GuardarCuentas[i];
        }
        delete[] GuardarCuentas;
        return;
    } else {
        Cuenta *** tmpCuenta = new Cuenta**[3];
        for(int i =0; i < 3; i++){
            tmpCuenta[i] = new Cuenta*[espacioC - 1];
            for(int j =0; j < espacioC-1; j++){
                tmpCuenta[i][j]= nullptr;
            }
        }
        for(int i =0; i < 3; i++){
            for(int j = 0; j < espacioC; j++){
                    tmpCuenta[i][j] = GuardarCuentas[i][j];
            }
        }
        tmpCuenta[lugar][espacioC] = o;
        for(int i = 0; i < 3; i++){
            delete[] GuardarCuentas[i];
        }
        delete[] GuardarCuentas;
        GuardarCuentas = tmpCuenta;
        espacioC++;
    }
    */
}

void Listas::borrarUsuario(Usuario* o)
{

}

void Listas::borrarTransaccion(Transaccion* o)
{

}

Listas::~Listas()
{
    if (GuardarUsuarios != nullptr) {
        for (int i = 0; i < 3; i++) {
            if (GuardarUsuarios[i] != nullptr) {
                for (int j = 0; j < espacioU; j++) {
                    delete GuardarUsuarios[i][j];
                }
                delete[] GuardarUsuarios[i];
            }
        }
        delete[] GuardarUsuarios;
    }

    if (GuardarCuentas != nullptr) {
        for (int i = 0; i < 3; i++) {
            if (GuardarCuentas[i] != nullptr) {
                for (int j = 0; j < espacioC; j++) {
                    delete GuardarCuentas[i][j];
                }
                delete[] GuardarCuentas[i];
            }
        }
        delete[] GuardarCuentas;
    }

    if (GuardarTransacciones != nullptr) {
        for (int i = 0; i < 3; i++) {
            if (GuardarTransacciones[i] != nullptr) {
                for (int j = 0; j < espacioT; j++) {
                    delete GuardarTransacciones[i][j];
                }
                delete[] GuardarTransacciones[i];
            }
        }
        delete[] GuardarTransacciones;
    }

}
