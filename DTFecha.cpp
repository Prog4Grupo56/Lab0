#include <iostream>
#include <vector>
#include <./DTFecha.h>

// CPP de Fecha
int DTFecha::getDia(){ return Dia; }
int DTFecha::getMes(){ return Mes; }
int DTFecha::getAno(){ return Ano; }
DTFecha::DTFecha(): Dia(1), Mes(1), Ano(0) {}
DTFecha::DTFecha(int dia, int mes, int ano): Dia(dia), Mes(mes), Ano(ano) {}
DTFecha::~DTFecha() {}