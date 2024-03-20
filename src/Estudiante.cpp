#include "../include/Estudiante.h"

Estudiante :: Estudiante(){
    Nombre = "";
    CI = 0;
    Email = "";
}

Estudiante :: Estudiante(string nombre, int ci, string email, vector<Informacion> info){
    Nombre = nombre;
    CI = ci;
    Email = email;
    informacion = info;
}

string Estudiante :: getNombre() {return Nombre;}
void Estudiante :: setNombre(string nombre) {Nombre = nombre;}

int Estudiante :: getCI() {return  CI;}
void Estudiante :: setCI(int ci) {CI = ci;}   

string Estudiante :: getEmail() {return  Email; }
void Estudiante :: setEmail(string email) {Email = email;}

vector<Informacion> Estudiante :: getInfo(){return informacion;}
void Estudiante :: setInfo(Informacion info){informacion.push_back(info);}

string Estudiante :: toString(){
    string ss = "Nombre: "+ Nombre + "\n" +
                "CI: "+ to_string(CI) + "\n" +  
                "Email: "+ Email + "\n" ;
    return ss;  
}


set<Informacion> Estudiante :: listarInfo(DTFecha* desde){
    set<Informacion> listaInfo;
    int i=0;

    if(!informacion.empty()){
        for(int i=0; i<informacion.size(); i++){   
            if ( desde < informacion[i].getDTFecha() ){     //fecha asoc. al est. es mayor (sobrecarga en <)
                listaInfo.insert(informacion[i]);           //agrego al conjunto 
            }
            //si no, no hago nada
        }
    }
};

Estudiante :: ~Estudiante(){}
