#include <iostream>
#include "Usuario.h"
#include "Cuenta.h"
#include "GestorDeArchivos.h"
#include "CrediBanco.h"
#include "UsuarioNormal.h"
#include "Transaccion.h"
using namespace std;

int main()
{
    /**
    char arr[]="vivian";
    char arr1[]="fnfnfn";
    char arr2[]="fjhfjf@fff.com";
    char arr3[] = "djdjdjd";
    String_ n1(arr);
    String_ contra1(arr1);
    String_ correo1(arr2);
    char dni[8]={'1','2','3','4','5','6','7','8'};
    Usuario num1(dni,n1,contra1, correo1);
    num1.print();
    num1.CambiarPasword(arr3);
    num1.print();
    //char numcuenta[20]= {'0','0','0','0','0','0','0','0','0','0',
    //                    '0','0','0','0','0','0','0','0','0','0'};
    //Cuenta c1(numcuenta, 43,100.60);
    cout << "GESTOR DE ARCHIVOS: " <<endl;
    GestorDeArchivos gest1;
    gest1.AgregarUsuario(num1);
    gest1.printUsuarios();
    */
    Usuario* num1 = new UsuarioNormal("12345678", "Vivian", "djdjfjfji", "fjfjfj@fcnjcn.com");
    num1->print(); //es un puntero
    String_ numeroBanco = "123222";
    String_ tipo="1";

    Credibanco CB;
    CB.caratula();
    CB.agregarUsuario(num1);
    CB.mostrarUsuarios();

    char numCuenta[20] = "00011122233";

    TransaccionDeposito dep(1, 200.0, 1, numCuenta, "Efectivo", "Vivian");
    cout << " DEPOSITO " << endl;
    dep.mostrarDeposito();

    TransaccionRetiro ret(2, 50.0, 1, numCuenta, "Cajero Automático");
    cout << " RETIRO " << endl;
    ret.mostrarRetiro();


/**
    String_ numeroBanco = "123222";
    String_ tipo="22";

    Credibanco CB(numeroBanco, 34.56,tipo);
    CB.caratula();


    //cout << num1.getName();
    //cout<<endl;
    //cout << num1.getDNI();
    //cout<<endl;
    //cout << num1.getpasword();
    //cout<<endl;
    //cout<< num1.getID();
    //cout << num1.getName();
    //num1.print();
    String_ s("VIVc");
    cout<< s.str_;
    String_ S;
    S=s;
    cout << endl;
    cout << S.str_;
    S.ChangeChar('M',0);
    cout << endl;
    cout << S.str_;
//*/
/**cout << "GESTOR DE ARCHIVOS: " <<endl;
    GestorDeArchivos gest1;
    gest1.AgregarUsuario(num1);
    gest1.printUsuarios();
    */
    return 0;
}


