#include <vector>
#include "Estudiante.h"
#include "DTFecha.h"

#ifndef INFORMACION
#define INFORMACION

class Informacion { // Clase Información 
private:
    int identificador;
    DTFecha* fecha;
    vector<Estudiante> estudiantes;
public:
    // Constructor por defecto
    Informacion();
    // Constructor por parámetros
    Informacion(int id, DTFecha* _fecha);
    // Destructor
    virtual ~Informacion();
    // OPERACIONES
    virtual string toString() { return ""; }
    // Getters
    int getIdentificador();
    DTFecha* getDTFecha();
    // Setters
    void setIdentificador(int _identificador);
    void setDTFecha( DTFecha* _DTFecha );
    // Metodos
    string getStringFecha();
};

#endif