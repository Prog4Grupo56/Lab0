#include <iostream>
using namespace std;

#include "../include/DTInfoEstudiante.h"

DTInfoEstudiante :: DTInfoEstudiante(){
    NombreEst = "";
    CI = 0;
    idInfo = 0; 
}

DTInfoEstudiante :: DTInfoEstudiante(int ci, string nombre, int idinfo){
    NombreEst = nombre;
    CI = ci;
    idInfo = idinfo;
}

string DTInfoEstudiante :: getNombre() {return NombreEst;}
int DTInfoEstudiante :: getCI() {return  CI;}
int DTInfoEstudiante :: getidInfo() {return  idInfo;}

ostream& operator<<(ostream& os, DTInfoEstudiante est){
    os << (to_string(est.getCI())+ ", " + est.getNombre() + ", " + to_string(est.getidInfo()));
    return os;
}

DTInfoEstudiante :: ~DTInfoEstudiante(){

}