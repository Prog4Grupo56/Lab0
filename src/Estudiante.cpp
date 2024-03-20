#include "../include/Estudiante.h"

// Constructor
Estudiante::Estudiante(string _nombre, int _CI, string _email): nombre(_nombre), CI(_CI), email(_email) { }
// Destructor
Estudiante::~Estudiante(){}
// Getters
string Estudiante::getNombre() {return nombre;}
int Estudiante::getCI() {return  CI;}
string Estudiante::getEmail() {return  email; }
// Setters
void Estudiante::setCI(int _CI) { CI = _CI; }   
void Estudiante::setNombre(string _nombre) { nombre = _nombre; }
void Estudiante::setEmail(string _email) { email = _email; }
// Metodos
string Estudiante::toString(){
    return nombre + ", " + to_string(CI) + ", " + email;  
}
string listarInfo(DTFecha desde){
    return "asd";
};
// Sobrecarga de <<
ostream& operator<<(ostream& os, Estudiante* estudiante) {
    os << estudiante->toString(); // Eliminamos la flecha adicional
    return os;
}