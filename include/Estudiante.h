#ifndef ESTUDIANTE
#define ESTUDIANTE

#include <iostream> 
using namespace std;

class Estudiante
{
private:
    string Nombre;
    int CI;
    string Email;
public:
    Estudiante();
    Estudiante(string nombre, int CI, string Email);

    string getNombre();
    void setNombre(string nombre);
    int getCI();
    void setCI(int CI);
    string getEmail();
    void setEmail(string Email);

    string toString();
    string listarInfo();

    ~Estudiante();
};

#endif