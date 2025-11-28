#include <iostream >
#include "CrediBanco.h"
#include <String_.h>
using namespace std;


Credibanco::Credibanco(){
    credito_banco=302994000000.86;
    opcion=0;
}

void Credibanco:: caratula() {
    cout << "====================================================\n";
    cout << "                SISTEMA BANCARIO - CREDIBANCO\n";
    cout << "====================================================\n";
    cout << "   Proyecto Final - Base de Datos en C++\n";
    cout << "----------------------------------------------------\n";
    cout << "   Autores: \n";
    cout << "   Almary Sharelly Choque Barreda\n";
    cout << "   Samantha Ncole Huayapa Ccapatinta\n";
    cout << "   Fernanda Gabriela Zuñiga Camacho\n";
    cout << "   Damián Gonzalo Cabrera Asillo\n";
    cout << "   Curso: CCOMP2-2\n";
    cout << "   Docente: Manuel Eduardo Loaiza Fernandez\n";
    cout << "   Alvaro Henry Mamani Aliaga\n";
    cout << "   Fecha: 28/11/25\n";
    cout << "====================================================\n\n";

    cout << "====================================================\n\n";
    cout <<"    CREDIBANCO\n";
    cout <<"Su banco de confianza \n";;
    cout<< "Aqui podra tener sus cuentas dependiendo de sus necesidades "<<endl;
    cout<< "En nuestro banco usted tendra seguridad y planes de interes a largo plazo"<<endl ;


    cout<< "    Tambien tendra acceso a distinas tarjetas dependiendo su preferencia segun sus necesidades "<<endl ;
    cout<< "           Debito "<<endl;
    cout<< "           Credito "<<endl;
    cout<< "           Cuenta de ahorro "<<endl;
    cout << "----------------------------------------------------\n";
    cout <<"    Podra hacer transacciones de tres tipos "<< endl ;
    cout<< "           Deposito  "<<endl;
    cout<< "           Retiro "<<endl;
    cout<< "           Prestamo "<<endl;
    cout << "----------------------------------------------------\n";
    cout<< "    Como siguiente paso vamos a pedirle sus datos para guardarlos en el sistema y asi asignarle su grupo de cuenta "<< endl ;
    cout<< "    Aparte se le dara ciertos beneficios en caso de ser parte de ser usuario  "<< endl ;
    cout<< "           Normal  "<<endl;
    cout<< "           Medio  "<<endl;
    cout<< "           Premiun  "<<endl;
    cout<< "           Preferencial  "<<endl;
    cout << "====================================================\n\n";

}


void Credibanco::mostrar_credito_banco() {
    std::cout << credito_banco;

}

void Credibanco::AgregarUsuario(Usuario * o){
    Lista.AgregarUsuario(o);
}
void Credibanco::MostrarUsuarios(){
    Lista.printUsuarios();
}
void Credibanco::BorrarUsuario(Usuario *o){
    Lista.borrarUsuario(o);
}

void Credibanco::AgregarCuenta(Cuenta * o){
    Lista.AgregarCuentas(o);
}
void Credibanco::MostrarCuentas(){
    Lista.printCuentas();
}
void Credibanco::BorrarCuenta(Cuenta *o){
    Lista.borrarCuenta(o);
}

void Credibanco::AgregarTransaccion(Transaccion * o){
    Lista.AgregarTransaccion(o);
}
void Credibanco::MostrarTransaccion(){
    Lista.printTransacciones();
}
void Credibanco::BorrarTransaccion(Transaccion *o){
    Lista.borrarTransaccion(o);
}


//metodos info usuarios
void Credibanco::c_usuario(){

    cout << "\n[CREAR USUARIO]\n";


}
void Credibanco::b_usuario(){
    cout << "\n[BORRAR USUARIO]\n";

}
void Credibanco::m_usuario(){
    cout << "\n[MOSTRAR USUARIOS]\n";

}
int Credibanco::menu(){
    while (true) {
        cout << "\n===== MENU =====\n";
        cout << "1. Crear usuario\n";
        cout << "2. Borrar usuario\n";
        cout << "3. Mostrar usuarios\n";
        cout << "4. Transaccion\n";
        cout << "5. Salir\n";
        cout << "Elige una opcion: ";

        cin >> opcion;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Entrada invalida.\n";
            continue;
        }

        switch (opcion) {
            case 1: c_usuario(); break;
            case 2: b_usuario(); break;
            case 3: m_usuario(); break;
            case 4:
            case 5:
                cout << "Saliendo...\n";
                return 0;

            default:
                cout << "Opcion invalida.\n";
        }
    }
}


void Credibanco::printUoC(int id) const
{
    int cual;
    cout << "Quieres tu cuenta o tu usuario?: " << endl;
    cout << "1=usuario " << endl;
    cout << "2=cuenta " << endl;
    cout << "Escoge uno : " << endl;

    cin>>cual;

    if(cual==1){
        cout << "Usuario"<< endl;
         Lista.printU(id);
         cout << endl;
    } else if(cual==2){
        cout << "Cuenta"<< endl;
         Lista.printC(id);
         cout << endl;
    } else {
        cout << "No escogiste una opcion valida"<< endl;
    }
}

void Credibanco::printT(int id)  {
    cout << "Transacciones" << endl;
    Lista.printT(id);
}

Credibanco::~Credibanco()
{
    //dtor
}












