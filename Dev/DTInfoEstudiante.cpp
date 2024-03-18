#include <iostream>
using namespace std;

#include <string>
#include "DTInfoEstudiante.h"

DTInfoEstudiante :: DTInfoEstudiante(){
    NombreEst = "";
    CI = 0;
    idInfo = ""; 
}

DTInfoEstudiante :: DTInfoEstudiante(int ci, string nombre, int idinfo){
    NombreEst = nombre;
    CI = ci;
    idInfo = idinfo;
}

string DTInfoEstudiante :: getNombre() {return Nombre;}
int DTInfoEstudiante :: getCI() {return  CI;}
string DTInfoEstudiante :: getidInfo() {return  idInfo;}

ostream& :: DTInfoEstudiante operator<<(ostream& os){
    os << to_string(CI) + ", " + NombreEst + ", " + to_string(idInfo);
    return os;
}
