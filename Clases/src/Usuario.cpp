#include "Usuario.h"
#include <iostream>

Usuario::Usuario()
{
    for(int i=0; i<8; i++){
        DNI[i]='0';
    }
    id =0;
}

Usuario::Usuario(char DNIpas[8], String_ name, String_ contra)
{
    for(int i=0; i<8; i++){
        DNI[i]=DNIpas[i];
    }
    id =0;
    nombre.CopiarString(name);
    pasword.CopiarString(contra);
}

void Usuario::print()
{
    std::cout << std::endl;
    std::cout<< "Informacion del Usuario:" << std::endl;
    std::cout << "Nombre: " << nombre.str_ << std::endl;
    std::cout << "DNI: " << DNI << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "pasword: " << pasword.str_ << std::endl;
    std::cout << std::endl;
}

int Usuario::getID()
{
    return id;
}

char* Usuario::getpasword(){
    return pasword.str_;
}

char* Usuario::getName()
{
    return nombre.str_;
}

char* Usuario::getDNI()
{
    return DNI;
}

void Usuario::CambiarPasword(char *NuevoPasword)
{

}

bool Usuario::VerificarPasword(String_ nuevopasword)
{
    bool verifica=true;
//    for(int i=0; i< pasword.getsize() ; i++){
//        if(pasword.getstring()[i]== nuevopasword.getstring()[i]){
//            verifica=true;
//        }
//        else{
//            verifica = false;
//            break;
//        }
//    }
    return verifica;
}

Usuario::~Usuario()
{

}
