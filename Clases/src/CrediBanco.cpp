#include <iostream >
#include "CrediBanco.h"
#include <String_.h>
using namespace std;


Credibanco::Credibanco(){
    credito_banco=0;
}

void Credibanco:: caratula() {
    cout<<"//*******************************************************************************************************//"<<endl;
    cout<<"                        Bienvenido a CrediBanco "<<endl;
    cout <<"Su banco de confianza "<<endl;
    cout<< "Aqui podra tener sus cuentas dependiendo de sus necesidades "<<endl;
    cout<< "En nuestro banco usted tendra seguridad y planes de interes a largo plazo"<<endl ;
    /**
    
    cout<< "    Tambien tendra acceso a distinas tarjetas dependiendo su preferencia segun sus necesidades "<<endl ;
    cout<< "           Debito "<<endl;
    cout<< "           Credito "<<endl;
    cout<< "           Cuenta de ahorro "<<endl;
    
    cout <<"    Podra hacer transacciones de tres tipos "<< endl ;
    cout<< "           Deposito  "<<endl;
    cout<< "           Retiro "<<endl;
    cout<< "           Prestamo "<<endl;
    
    cout<< "    Como siguiente paso vamos a pedirle sus datos para guardarlos en el sistema y asi asignarle su grupo de cuenta "<< endl ;
    cout<< "    Aparte se le dara ciertos beneficios en caso de ser parte de ser usuario  "<< endl ;
    cout<< "           Normal  "<<endl;
    cout<< "           Premiun  "<<endl;
    cout<< "           Preferencial  "<<endl;

*/
}


void mostrar_credito_banco() {
    return credito_banco;
    
}

Credibanco::~Credibanco()
{
    //dtor
}






