#include <iostream>
#include "Usuario.h"
using namespace std;

int main()
{

    char arr[]="vivian";
    char arr1[]="fnfnfn";
    //String_ n1(arr);
    //String_ contra1(arr1);
    char dni[8]={'1','2','3','4','5','6','7','8'};
    Usuario num1(dni);//,arr,arr1);
    cout << num1.getName();
    cout<<endl;
    cout << num1.getDNI();
    cout<<endl;
    cout << num1.getpasword();
    cout<<endl;
    cout<< num1.getID();
    //cout << num1.getName();
/**
    String_ s("VIVc");
    cout<< s.getstring();
    String_ S;
    S=s;
    cout << endl;
    cout << S.getstring();
    S.ChangeChar('M',0);
    cout << endl;
    cout << S.getstring();
*/
    return 0;
}
