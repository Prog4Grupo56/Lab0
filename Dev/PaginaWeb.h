#include <iostream>
#include <vector>
#include "Informacion.h"
#ifndef PAGINAWEB
#define PAGINAWEB

class PaginaWeb: public Informacion {
    private:
        string titulo;
        string url;
        string textoDeInteres;
    public:
    // Constructor
    PaginaWeb(int _id, DTFecha* _fecha, string _titulo, string _url, string _textoDeInteres);
    // Destructor
    ~PaginaWeb();
    // Getters
    string getTitulo();
    string getUrl();
    string getTextoDeInteres();
    // Setters
    void setTitulo(string _titulo);
    void setUrl(string _url);
    void setTextoDeInteres(string _textoDeInteres);
    // Metodos
    string toString();
    // Sobrecarga de <<
    friend ostream& operator<<(ostream& os, PaginaWeb* paginaWeb);

};

#endif