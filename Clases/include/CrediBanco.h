#ifndef CREDIBANCO_H
#define CREDIBANCO_H
#include "Listas.h"
#include "Usuario.h"
#include "String_.h"


class Credibanco {

protected:
    String_ numeroCuenta;
    Listas Lista;
public:
    Credibanco();
    void agregarUsuario(Usuario* u);
    void mostrarUsuarios() const;
    String_ obtenerNumeroCuenta() const;



    // Método virtual para extender en clases hijas
    virtual void caratula() ;
    ~Credibanco();
};

#endif



