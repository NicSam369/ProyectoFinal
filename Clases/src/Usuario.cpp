#include "Usuario.h"
#include <iostream>

Usuario::Usuario()
{
    for(int i=0; i<8; i++){
        DNI[i]='0';
    }
    DNI[8]='\0';
    id =0;
}

Usuario::Usuario(char DNIpas[8], String_ name, String_ contra, String_ email)
{
    for(int i=0; i<8; i++){
        DNI[i]=DNIpas[i];
    }
    id =0;
    nombre= name;
    pasword= contra;
    correo=email;
    NumeroCuentas =0;
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

char* Usuario::getName() const
{
    return nombre.str_;
}

char* Usuario::getDNI()
{
    return DNI;
}

char* Usuario::getpasword() const{
    return pasword.str_;
}

int Usuario::getTipo(){
    return tipo;
}

char* Usuario::getCorreo() const{
    return correo.str_;
}

int Usuario::GetNumeroCuentas(){
    return NumeroCuentas;
}

void Usuario::setDNI(char arr[9]){
    bool TodoCero=true;
    for(int i=0; i<8; i++){
        if(DNI[i]=='0'){
            TodoCero=true;
        } else{
            TodoCero=false;
            break;
        }
    }
    if(TodoCero){
       for(int i=0; i<8; i++){
            DNI[i]=arr[i];
        }
        DNI[8]='\0';
    } else {
       for(int i=0; i<8; i++){
            DNI[i]='0';
            DNI[i]=arr[i];
        }
        DNI[8]='\0';
    }
}
void Usuario::setnombre(const String_& name){
    if(nombre==nullptr){
        nombre=name;
    }
}
void Usuario::setPasword(const String_& contra){
    if(pasword==nullptr){
        pasword=contra;
    }
}
void Usuario::setCorreo(const String_& email){
    if(correo==nullptr){
        correo=email;
    }
}
void Usuario::setid(int inid){
    id=inid;
}

void Usuario:: setType(int type){
    if(type==0){
        tipo=1;
    } else if (type==1){
        tipo=2;
    } else {
        tipo=3;
    }
}

void Usuario::setCuentas(int cantidadCuentas){
    NumeroCuentas=cantidadCuentas;
}

void Usuario::CambiarPasword(char NuevoPasword[])
{
    pasword=NuevoPasword;
}
//corregir hay error con la llamada
//num1.CambiarPasword("djdjdjd");
//aparece warning con eso, no deberia ser asi
void Usuario::CambiarCorreo(char NuevoCorreo[])
{
    pasword=NuevoCorreo;
}
bool Usuario::VerificarPasword(String_ nuevopasword)
{
    //agregar en string el operator==
        if(pasword== nuevopasword){
           return true;
        }
        else{
            return false;
    }
    return true;
}
Usuario::~Usuario()
{

}
