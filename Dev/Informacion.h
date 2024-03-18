#include <iostream>
#include <vector>
#include "DTFecha.h"
#ifndef INFORMACION
#define INFORMACION

class Informacion { // Clase Información 
private:
    int identificador;
    DTFecha* fecha;
public:
    // Constructor por defecto
    Informacion();
    // Constructor por parámetros
    Informacion(int id, DTFecha* _fecha);
    // Destructor
    ~Informacion();
    // OPERACIONES
    virtual std::string toString() { return ""; }
    // Getters
    int getIdentificador();
    // Setters
    void setIdentificador(int _identificador);
    void setDTFecha( DTFecha* _DTFecha );
    // Metodos
    std::string getStringFecha();
};

#endif