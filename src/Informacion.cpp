#include "../include/Informacion.h"
using namespace std;

// Constructor
Informacion::Informacion( int id, DTFecha* _fecha ): identificador(id), fecha(_fecha) {}
// Destructor
Informacion::~Informacion(){}
// Getters
int Informacion::getIdentificador(){ return identificador; }
// Setters
void Informacion::setIdentificador(int _identificador) { identificador = _identificador; }
void Informacion::setDTFecha( DTFecha* _fecha ) { fecha = _fecha; }
// Metodos
std::string Informacion::getStringFecha(){ return fecha->toString(); }
