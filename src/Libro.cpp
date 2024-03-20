#include "../include/Libro.h"

// Constructor
Libro::Libro(int id, DTFecha fecha, string titulo_, vector<string> autores_, string resumen_) : Informacion(id, fecha), titulo(titulo_), autores(autores_), resumen(resumen_) {}
// Destructor
Libro::~Libro(){}
// Getters
string Libro::getTitulo(){ return titulo; }
vector<string> Libro::getAutores(){ return autores; }
string Libro::getResumen(){ return resumen; }
// Metodos
string Libro::toString() {
    string result = to_string(getIdentificador()) + ", ";
    result += getStringFecha() + ", ";
    result += titulo + ", ";
    result += "Autores: ";
    for (size_t i = 0; i < autores.size(); ++i) {
        result += autores[i];
        if (i != autores.size() - 1)
            result += ", ";
    }
    result += ", ";
    result += resumen;
    return result;
}
// Sobrecarga de <<
ostream& operator<<(ostream& os, Libro* libro) {
    os << libro->toString() + "\n" + "\n"; // Eliminamos la flecha adicional
    return os;
}

