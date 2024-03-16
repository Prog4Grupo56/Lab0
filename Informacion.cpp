#include <iostream>
#include <vector>
#include "Informacion.h"

Informacion::Informacion( int id, DTFecha* _fecha ): identificador(id), fecha(_fecha) {}
int Informacion::getIdentificador(){ return identificador; }
int Informacion::getInformacionDia(){ return fecha->getDia(); }
int Informacion::getInformacionMes(){ return fecha->getMes(); }
int Informacion::getInformacionAno(){ return fecha->getAno(); }
void Informacion::setIdentificador(int _identificador) { identificador = _identificador; }
void Informacion::setDTFecha( DTFecha* _fecha ) { fecha = _fecha; }
