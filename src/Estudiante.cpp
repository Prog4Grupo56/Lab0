#include "../include/Estudiante.h"

// Constructor
Estudiante::Estudiante(string _nombre, int _CI, string _email): nombre(_nombre), CI(_CI), email(_email) { }
// Destructor
Estudiante::~Estudiante(){}
// Getters
string Estudiante::getNombre() {return nombre;}
int Estudiante::getCI() {return  CI;}
string Estudiante::getEmail() {return  email; }
vector<Informacion*> Estudiante::getInfo(){ return listaInformacion; }
// Setters
void Estudiante::setCI(int _CI) { CI = _CI; }   
void Estudiante::setNombre(string _nombre) { nombre = _nombre; }
void Estudiante::setEmail(string _email) { email = _email; }
void Estudiante::setInfo(Informacion* info){ listaInformacion.push_back(info); }
// Metodos
string Estudiante::toString(){
    return nombre + ", " + to_string(CI) + ", " + email;  
}
set<string> Estudiante::listarInfo(string desde){

    int pos1 = desde.find('/');
    int pos2 = desde.find('/', pos1 + 1);

    int dia = stoi(desde.substr(0, pos1));
    int mes = stoi(desde.substr(pos1 + 1, pos2 - pos1 - 1));
    int ano = stoi(desde.substr(pos2 + 1));

    DTFecha fechaAux = DTFecha(dia,mes,ano);

    set<string> resultado;

    for (long long unsigned int i = 0; i < listaInformacion.size(); i++)
    {
        if (fechaAux < listaInformacion[i]->getFecha()){
            cout << listaInformacion[i]->toString() + "\n\n";
            resultado.insert(listaInformacion[i]->toString());
        }
    }
    

    return resultado;
};
// Sobrecarga de <<
ostream& operator<<(ostream& os, Estudiante* estudiante) {
    os << estudiante->toString(); // Eliminamos la flecha adicional
    return os;
}