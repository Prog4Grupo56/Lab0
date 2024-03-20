#ifndef INFORMACION
#define INFORMACION
#include <vector>
#include "DTFecha.h"

class Estudiante;

class Informacion { // Clase Información 
private:
    int identificador;
    DTFecha fecha;
    vector<Estudiante*> listaEstudiante;
public:
    // Constructor
    Informacion(int id, DTFecha _fecha);
    // Destructor
    virtual ~Informacion();
    // OPERACIONES
    virtual string toString() = 0; // Asi se define un atributo puramente virtual
    // Getters
    int getIdentificador();
    DTFecha getFecha();
    vector<Estudiante*> getInfo();
    // Setters
    void setIdentificador(int _identificador);
    void setDTFecha( DTFecha _DTFecha );
    void setInfo(Estudiante* estudiante);
    // Metodos
    string getStringFecha();
};

#endif