#include "../include/Funciones.h"

void imprimirListaDesde(set<string> conjInfo){
    if(!conjInfo.empty()){
        for (set<string>::iterator i = conjInfo.begin() ; i!=conjInfo.end() ; i++){
            cout << *i << "\n\n";   
        }
    }
};