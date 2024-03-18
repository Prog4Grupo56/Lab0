#include <iostream>
using namespace std;

#include <string>
#include "Estudiante.h"

Estudiante :: Estudiante(){
    Nombre = "";
    CI = 0;
    Email = ""; 
}

Estudiante :: Estudiante(string nombre, int ci, string email){
    Nombre = nombre;
    CI = ci;
    Email = email;
}

string Estudiante :: getNombre() {return Nombre;}
void Estudiante :: setNombre(string nombre) {Nombre = nombre;}

int Estudiante :: getCI() {return  CI;}
void Estudiante :: setCI(int ci) {CI = ci;}   

string Estudiante :: getEmail() {return  Email; }
void Estudiante :: setEmail(string email) {Email = email;}

string Estudiante :: toString(){
    string ss = "Nombre: "+ Nombre + "\n" +
                "CI: "+ to_string(CI) + "\n" +  
                "Email: "+ Email + "\n" ;
    return ss;  
}

string listarInfo(DTFecha desde){

};
