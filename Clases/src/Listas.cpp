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
    if(GuardarUsuarios == nullptr){
        espacioU++;
        GuardarUsuarios = new Usuario*[espacioU];
        GuardarUsuarios[0] = o;
    } else {
        Usuario** tmpUsuario = new Usuario*[espacioU + 1];
        for(int i = 0; i < espacioU; i++){
            tmpUsuario[i] = GuardarUsuarios[i];
        }
        tmpUsuario[espacioU] = o;
        delete [] GuardarUsuarios;
        GuardarUsuarios = tmpUsuario;
        espacioU++;
    }
}


void Listas::printUsuarios() const {
    std::cout << "=== Usuarios Premium ===" << std::endl;
    for(int i = 0; i < espacioU; i++){
        if(GuardarUsuarios[i]->getTipo() == 2){
            GuardarUsuarios[i]->print();
        }
    }

    std::cout << "=== Usuarios Preferenciales ===" << std::endl;
    for(int i = 0; i < espacioU; i++){
        if(GuardarUsuarios[i]->getTipo() == 3){
            GuardarUsuarios[i]->print();
        }
    }

    std::cout << "=== Usuarios Normales ===" << std::endl;
    for(int i = 0; i < espacioU; i++){
        if(GuardarUsuarios[i]->getTipo() == 1){
            GuardarUsuarios[i]->print();
        }
    }
}

Listas::~Listas()
{
    //dtor
}
