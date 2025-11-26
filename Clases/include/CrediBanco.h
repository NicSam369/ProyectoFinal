#ifndef CREDIBANCO_H
#define CREDIBANCO_H
#include "Listas.h"
#include "Usuario.h"
#include "String_.h"


class Credibanco {

protected:
    
    double credito_banco;
    Listas Lista;
public:
    Credibanco();
    
    void mostrar_credito_banco() ;
    String_ obtenerNumeroCuenta() const;



    // Método virtual para extender en clases hijas
    virtual void caratula() ;
    ~Credibanco();
};

#endif






