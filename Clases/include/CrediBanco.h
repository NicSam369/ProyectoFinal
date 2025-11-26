#ifndef CREDIBANCO_H
#define CREDIBANCO_H
#include "Listas.h"
#include "Usuario.h"
#include "String_.h"


class Credibanco {

protected:
    String_ numeroCuenta;
    double credito_banco;
    Listas Lista;
public:
    Credibanco();
    void agregarUsuario(Usuario* u);
    void mostrar_credito_banco() const;
    void mostrarUsuarios() const;
    String_ obtenerNumeroCuenta() const;



    // Método virtual para extender en clases hijas
    virtual void caratula() ;
    ~Credibanco();
};

#endif




