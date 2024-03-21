#include "../include/Informacion.h"

// Constructor
Informacion::Informacion( int id, DTFecha _fecha ): identificador(id), fecha(_fecha) {}
// Destructor
Informacion::~Informacion(){}
// Getters
int Informacion::getIdentificador(){ return identificador; }
DTFecha Informacion::getFecha(){ return fecha; }
vector<Estudiante*> Informacion::getEstudiantes(){ return listaEstudiante; }
// Setters
void Informacion::setIdentificador(int _identificador) { identificador = _identificador; }
void Informacion::setDTFecha( DTFecha _fecha ) { fecha = _fecha; }
void Informacion::setEstudiante(Estudiante* estudiante){ listaEstudiante.push_back(estudiante); }
// Metodos
string Informacion::getStringFecha(){ return fecha.toString(); }
