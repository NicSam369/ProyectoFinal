#include <iostream >
#include "CrediBanco.h"
#include <String_.h>
using namespace std;


Credibanco::Credibanco(){//String_ numero){
    //numeroCuenta=numero;
}

void Credibanco:: caratula() {
    cout<<"     //*******************************************************************************************************//"<<endl;
    cout<<"                        Bienvenido a CrediBanco "<<endl;
    cout <<"    Su banco de confianza "<<endl;
    cout<< "    Aqui podra tener sus cuentas dependiendo de sus necesidades "<<endl;
    cout<< "    En nuestro banco usted tendra seguridad y planes de interes a largo plazo"<<endl ;
    /**
    char tmp;
    cout<< "    Para crear su cuenta primero ingresara que tipo de tarjeta quiere "<<endl ;
    cout<< "           A=debito ";
    cout<< "           B=credito ";
    cout<< "           C=cuenta de ahorro ";
    cin >>tmp ;
    tipo = String_ (tmp);
    if (tipo =="a"  ||  tipo=="A"){ //||  tmp =="debito"
        cout <<"felicidades usted acaba de recibir una tarjeta de debito "<<endl ;
    }else if (tipo =="b"  ||  tipo =="B"){ //||  tmp =="credito"
        cout <<"felicidades usted acaba de recibir una tarjeta de credito "<<endl ;
    }else if (tipo =="c"  ||  tipo =="C"){ //||  tmp =="cuenta de ahorro"
        cout <<"felicidades usted acaba de recibir una tarjeta de cuenta de ahorro "<<endl ;
    }
    cout<< "    Como siguiente paso vamos a pedirle sus datos para guardarlos en el sistema y asi asignarle su grupo de cuenta "<< endl ;
    cout<< "    Aparte se le dara ciertos beneficios en caso de ser parte de ser usuario premiun o preferencial "<< endl ;

*/
}
void Credibanco::agregarUsuario(Usuario* u) {
    Lista.AgregarUsuario(u);
}

void Credibanco::mostrarUsuarios() const {
    Lista.printUsuarios();
}

String_ Credibanco::obtenerNumeroCuenta() const {
    return numeroCuenta;
}
Credibanco::~Credibanco()
{
    //dtor
}


