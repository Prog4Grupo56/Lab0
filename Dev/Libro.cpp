#include "Libro.h"

// Constructor
Libro::Libro(int id, DTFecha* fecha, std::string titulo_, std::vector<std::string> autores_, std::string resumen_) : Informacion(id, fecha), titulo(titulo_), autores(autores_), resumen(resumen_) {}
// Destructor
Libro::~Libro(){}
// Getters
std::string Libro::getTitulo(){ return titulo; }
std::vector<std::string> Libro::getAutores(){ return autores; }
std::string Libro::getResumen(){ return resumen; }
// Metodos
std::string Libro::toString() {
    std::string result = "Libro: ";
    result += std::to_string(getIdentificador()) + ", ";
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
std::ostream& operator<<(std::ostream& os, Libro* libro) {
    os << libro->toString(); // Eliminamos la flecha adicional
    return os;
}

