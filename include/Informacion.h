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
    // Constructor
    Informacion(int id, DTFecha* _fecha);
    // Destructor
    virtual ~Informacion();
    // OPERACIONES
    virtual string toString() = 0; // Asi se define un atributo puramente virtual
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