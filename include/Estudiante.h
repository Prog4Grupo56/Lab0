#ifndef ESTUDIANTE
#define ESTUDIANTE

#include <vector>
#include <set>
#include "Informacion.h"
#include "DTFecha.h"

class Estudiante
{
private:
    string Nombre;
    int CI;
    string Email;
    vector<Informacion> informacion;
public:
    Estudiante();
    Estudiante(string nombre, int CI, string Email, vector<Informacion> info);

    string getNombre();
    void setNombre(string nombre);
    int getCI();
    void setCI(int CI);
    string getEmail();
    void setEmail(string email);
    vector<Informacion> getInfo();
    void setInfo(Informacion informacion);

    string toString();
    set<Informacion> listarInfo(DTFecha* desde);

    ~Estudiante();
};

#endif