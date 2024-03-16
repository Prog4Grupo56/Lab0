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
    Informacion(int id, DTFecha* _fecha);
    // Metodos
    virtual std::string toString() { return ""; }
    // Getters
    int getIdentificador();
    int getInformacionDia();
    int getInformacionMes();
    int getInformacionAno();
    // Setters
    void setIdentificador(int _identificador);
    void setDTFecha( DTFecha* _DTFecha );
};

#endif INFORMACION