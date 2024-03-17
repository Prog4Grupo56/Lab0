#include <iostream>
#include <vector>
#include "Informacion.h"
#ifndef LIBRO
#define LIBRO
class Libro: public Informacion { // Clase Libro que extiende de Información
private:
    std::string titulo;
    std::vector<std::string> autores;
    std::string resumen;
public:
    // Constructor
    Libro(int id, DTFecha* fecha, std::string titulo_, std::vector<std::string> autores_, std::string resumen_);
    // Destructor
    ~Libro();
    // Getters
    std::string getTitulo();
    std::vector<std::string> getAutores();
    std::string getResumen();
    // Metodos
    std::string toString();
    // Sobrecarga de <<
    friend std::ostream& operator<<(std::ostream& os, Libro* libro);
};

#endif