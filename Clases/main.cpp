#include <iostream>
#include "Usuario.h"
#include "Cuenta.h"
#include "GestorDeArchivos.h"

using namespace std;

int main()
{
///**
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


/**
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
    return 0;
}
