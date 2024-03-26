#include "../include/Libro.h"

// Constructor
Libro::Libro(int id, DTFecha fecha, string titulo_, set<string> autores_, string resumen_) : Informacion(id, fecha), titulo(titulo_), autores(autores_), resumen(resumen_) {}
// Destructor
Libro::~Libro(){}
// Getters
string Libro::getTitulo(){ return titulo; }
set<string> Libro::getAutores(){ return autores; }
string Libro::getResumen(){ return resumen; }
// Metodos
string Libro::toString() {
    string result = to_string(getIdentificador()) + ", ";
    result += getStringFecha() + ", ";
    result += titulo + ", ";
    for (set<string>::const_iterator it = autores.begin(); it != autores.end(); ++it) {
        result += *it;
        if (it != prev(autores.end()))
            result += ", ";
    }
    result += ", ";
    result += resumen;
    return result;
}




