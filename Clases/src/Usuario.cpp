#include "Usuario.h"
#include <iostream>

Usuario::Usuario()
{
    for(int i=0; i<8; i++){
        DNI[i]='0';
    }
    id =0;
}

Usuario::Usuario(char DNIpas[8])//, char nom[], char pasw[])
{
    for(int i=0; i<8; i++){
        DNI[i]=DNIpas[i];
    }
    id =0;
    //nombre= nom; ERROR
    //pasword= pasw; ERROR
}

void Usuario::print()
{
    std::cout << std::endl;
    std::cout<< "Informacion del Usuario:" << std::endl;
    //std::cout << "Nombre: " << nombre.getstring() << std::endl;
    std::cout << "DNI: " << DNI << std::endl;
    std::cout << "ID: " << id << std::endl;
    //std::cout << "pasword: " << pasword.getstring() << std::endl;
    std::cout << std::endl;
}

int Usuario::getID()
{
    return id;
}

char* Usuario::getpasword(){
//    return pasword.getstring();
}

char* Usuario::getName()
{
//    return nombre.getstring();
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
