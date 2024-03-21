#include "../include/Funciones.h"

void imprimirListaDesde(set<string> conjInfo){
    if(!conjInfo.empty()){
        for (set<string>::iterator i = conjInfo.begin() ; i!=conjInfo.end() ; i++){
            cout << *i << "\n\n";   
        }
    }
};

vector<DTInfoEstudiante> buscarEnInfo(string palabra, vector<Informacion*> listaInfo){

    vector<DTInfoEstudiante> resultado;

    for (long long unsigned int i = 0; i < listaInfo.size(); i++)
    {
        
        string aRevisar = listaInfo[i]->toString();

        if ( aRevisar.find(palabra) != string::npos ){

            for (long long unsigned int j = 0; j < listaInfo[i]->getEstudiantes().size(); j++)
            {
                resultado.push_back( DTInfoEstudiante(listaInfo[i]->getEstudiantes()[j]->getCI(), listaInfo[i]->getEstudiantes()[j]->getNombre(), listaInfo[i]->getIdentificador()) ); 
            }
                        
        }

    }
    
    return resultado;

}

void eliminarInfo(int id, vector<Informacion*>& informacion){
    for (long long unsigned int i = 0; i < informacion.size(); i++)
    {
        if ( informacion[i]->getIdentificador() == id ){
            informacion.erase(informacion.begin() +i);
        }
    }
}