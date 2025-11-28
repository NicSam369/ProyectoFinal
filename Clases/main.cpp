#include <iostream>
#include "Usuario.h"
#include "Cuenta.h"
#include "GestorDeArchivos.h"
#include "CrediBanco.h"
#include "UsuarioNormal.h"
#include "Transaccion.h"
#include "TransaccionDeposito.h"
#include "TransaccionPrestamo.h"
#include "TransaccionRetiro.h"
#include "UsuarioMedio.h"
#include "UsuarioPremium.h"

using namespace std;

int main()
{


    Usuario* num1  = new UsuarioNormal ("78123456", "Valeria", "passV123", "valeria.gomez@mail.com", 101);
    Usuario* num2  = new UsuarioPremium("82345912", "Luis", "LMtz45#", "luis.mtz@example.com", 102);
    Usuario* num3  = new UsuarioMedio  ("90451283", "Sofia", "SofiH88", "sofia.herrera@correo.com", 103);
    Usuario* num4  = new UsuarioNormal ("76451239", "Carlos", "CRiv902", "c.rivera@mail.com", 104);
    Usuario* num5  = new UsuarioPremium("89754321", "Ana", "AnaT55", "ana.torres@example.com", 105);
    Usuario* num6  = new UsuarioMedio  ("91567823", "Jorge", "JSal09", "jorge.salinas@mail.com", 106);
    Usuario* num7  = new UsuarioNormal ("73194562", "Camila", "CamR09", "camila.rojas@mail.com", 107);
    Usuario* num8  = new UsuarioPremium("85673429", "Diego", "DNav44", "diego.nav@correo.com", 108);
    Usuario* num9  = new UsuarioPremium  ("96812345", "Lucía", "LucP33", "lucia.peralta@example.com", 109);


    Credibanco CB;
    CB.caratula();
    cout << endl;

    CB.AgregarUsuario(num1);
    CB.AgregarUsuario(num2);
    CB.AgregarUsuario(num3);
    CB.AgregarUsuario(num4);
    CB.AgregarUsuario(num5);
    CB.AgregarUsuario(num6);
    CB.AgregarUsuario(num7);
    CB.AgregarUsuario(num8);
    CB.AgregarUsuario(num9);

    CB.MostrarUsuarios();

    return 0;
}



