#include <iostream>
#include <vector>
#include "DTFecha.h"
#ifndef INFORMACION
#define INFORMACION

class Informacion { // Clase Información 
private:
    int identificador;
    DTFecha* fecha;
    //Vector<Estudiante> estudiantes
public:
    // Constructor
    Informacion(int id, DTFecha* _fecha);
    // Destructor
    ~Informacion();
    // Metodos
    virtual std::string toString() { return ""; }
    // Getters
    int getIdentificador();
    // Setters
    void setIdentificador(int _identificador);
    void setDTFecha( DTFecha* _DTFecha );
    // Metodos
    std::string getStringFecha();
    //void asociarEstudiante(Estusiante e);
};

#endif