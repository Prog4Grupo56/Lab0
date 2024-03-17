#include "DTFecha.h"

// CPP de Fecha

// Constructor por defecto
DTFecha::DTFecha(): dia(1), mes(1), ano(0) {}
// Constructor
DTFecha::DTFecha(int _dia, int _mes, int _ano): dia(_dia), mes(_mes), ano(_ano) {}
// Destructor
DTFecha::~DTFecha() {}
// Getters
int DTFecha::getDia(){ return dia; }
int DTFecha::getMes(){ return mes; }
int DTFecha::getAno(){ return ano; }
// Metodos
std::string DTFecha::toString(){
    return std::to_string(dia) + "/" + std::to_string(mes) + "/" + std::to_string(ano);
}