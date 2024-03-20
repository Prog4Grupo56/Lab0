#ifndef ESTUDIANTE
#define ESTUDIANTE

#include <set>
#include "Informacion.h"

class Estudiante
{
private:
    string nombre;
    int CI;
    string email;
    vector<Informacion> informacion;
public:
    // Constructor
    Estudiante(string _nombre, int _CI, string _email);
    // Destructor
    ~Estudiante();
    // Getters
    string getNombre();
    int getCI();
    string getEmail();
    vector<Informacion> getInfo();
    // Setters
    void setNombre(string _nombre);
    void setCI(int _CI);
    void setEmail(string e_mail);
    void setInfo(Informacion informacion);
    // Metodos
    string toString();
    set<Informacion> listarInfo(DTFecha* desde);
    // Sobrecarga de <<
    friend ostream& operator<<(ostream& os, Estudiante* estudiante);
};

#endif