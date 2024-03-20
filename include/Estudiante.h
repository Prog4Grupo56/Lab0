#ifndef ESTUDIANTE
#define ESTUDIANTE
#include "DTFecha.h"

class Estudiante
{
private:
    string nombre;
    int CI;
    string email;
public:
    // Constructor
    Estudiante(string _nombre, int _CI, string _email);
    // Destructor
    ~Estudiante();
    // Getters
    string getNombre();
    int getCI();
    string getEmail();
    // Setters
    void setNombre(string _nombre);
    void setCI(int _CI);
    void setEmail(string e_mail);
    // Metodos
    string toString();
    string listarInfo();
    // Sobrecarga de <<
    friend ostream& operator<<(ostream& os, Estudiante* estudiante);
};

#endif