#include "Informacion.h"
#ifndef LIBRO
#define LIBRO

class Libro: public Informacion { // Clase Libro que extiende de Información
private:
    string titulo;
    vector<string> autores;
    string resumen;
public:
    // Constructor
    Libro(int id, DTFecha fecha, string titulo_, vector<string> autores_, string resumen_);
    // Destructor
    ~Libro();
    // Getters
    string getTitulo();
    vector<string> getAutores();
    string getResumen();
    // Metodos
    string toString();
};

#endif