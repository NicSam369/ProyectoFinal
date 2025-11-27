#include "Cuenta.h"
#include "Usuario.h"
#include <iostream>

Usuario::Usuario()
{
    for(int i=0; i<8; i++){
        DNI[i]='0';
    }

    id =0;
}

Usuario::Usuario(const char *DNIpas, String_ name, String_ contra, String_ email)
{
    for(int i=0; i<8; i++){
        DNI[i]=DNIpas[i];
    }
    DNI[8]='\0';
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
    std::cout << "Nombre: ";
    nombre.print();
    //std::cout << std::endl;
    std::cout << "DNI: " << DNI << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "pasword: ";
    pasword.print();
    //std::cout << std::endl;
    std::cout << "tipo: " << tipoUsuario << std::endl;
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

int Usuario::getTipo() const{
    return tipoUsuario;
}

char* Usuario::getCorreo() const{
    return correo.str_;
}

int Usuario::GetNumeroCuentas(){
    return NumeroCuentas;
}

void Usuario::setDNI(const char* arr){
    if(arr!=nullptr){
    bool TodoCero=true;
    for(int i=0; i<8; i++){
        if(DNI[i]!='0'){
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
            DNI[i]=arr[i];
        }
    }
    }
    return;
}
void Usuario::setnombre(const String_& name){
        nombre=name;
}
void Usuario::setPasword(const String_& contra){
        pasword=contra;
}
void Usuario::setCorreo(const String_& email){
        correo=email;
}
void Usuario::setid(int inid){
    id=inid;
}

void Usuario:: setType(int type){
    if(type==0){
        tipoUsuario=1;
    } else if (type==1){
        tipoUsuario=2;
    } else {
        tipoUsuario=3;
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
