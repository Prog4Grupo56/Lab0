#ifndef ESTUDIANTE
#define ESTUDIANTE
#include "Informacion.h"
#include <set>

class Informacion;

class Estudiante
{
private:
    string nombre;
    int CI;
    string email;
    vector<Informacion*> listaInformacion;
public:
    // Constructor
    Estudiante(string _nombre, int _CI, string _email);
    // Destructor
    ~Estudiante();
    // Getters
    string getNombre();
    int getCI();
    string getEmail();
    vector<Informacion*> getInfo();
    // Setters
    void setNombre(string _nombre);
    void setCI(int _CI);
    void setEmail(string e_mail);
    void setInfo(Informacion* informacion);
    // Metodos
    string toString();
    set<string> listarInfo(DTFecha desde);
    void eliminarInformacion(int identificador);
    // Sobrecarga de <<
    friend ostream& operator<<(ostream& os, Estudiante* estudiante);
    
};

#endif