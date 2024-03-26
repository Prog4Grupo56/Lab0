#include "Informacion.h"
#ifndef LIBRO
#define LIBRO

class Libro: public Informacion { // Clase Libro que extiende de Información
private:
    string titulo;
    set<string> autores;
    string resumen;
public:
    // Constructor
    Libro(int id, DTFecha fecha, string titulo_, set<string> autores_, string resumen_);
    // Destructor
    ~Libro();
    // Getters
    string getTitulo();
    set<string> getAutores();
    string getResumen();
    // Metodos
    string toString();
};

#endif