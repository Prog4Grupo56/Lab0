#include <iostream>
#include <vector>
#include "Libro.h"

Libro::Libro(int id, DTFecha* fecha, std::string titulo_, std::vector<std::string> autores_, std::string resumen_) : Informacion(id, fecha), titulo(titulo_), autores(autores_), resumen(resumen_) {}
Libro::~Libro(){}
std::string Libro::getTitulo(){ return titulo; }
std::vector<std::string> Libro::getAutores(){ return autores; }
std::string Libro::getResumen(){ return resumen; }
std::string Libro::toString() {
    std::string result = "Libro: ";
    result += std::to_string(getIdentificador()) + ", ";
    result += std::to_string(getInformacionDia()) + "/" + std::to_string(getInformacionMes()) + "/" + std::to_string(getInformacionAno()) + ", "; // Descomentar esta línea
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
