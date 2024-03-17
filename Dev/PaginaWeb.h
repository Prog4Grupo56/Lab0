#include <iostream>
#include <vector>
#include "Informacion.h"
#ifndef PAGINAWEB
#define PAGINAWEB

class PaginaWeb: public Informacion {
    private:
        std::string titulo;
        std::string url;
        std::string textoDeInteres;
    public:
    // Constructor
    PaginaWeb(int _id, DTFecha* _fecha, std::string _titulo, std::string _url, std::string _textoDeInteres);
    // Destructor
    ~PaginaWeb();
    // Getters
    std::string getTitulo();
    std::string getUrl();
    std::string getTextoDeInteres();
    // Setters
    void setTitulo(std::string _titulo);
    void setUrl(std::string _url);
    void setTextoDeInteres(std::string _textoDeInteres);
    // Metodos
    std::string toString();
    // Sobrecarga de <<
    friend std::ostream& operator<<(std::ostream& os, PaginaWeb* paginaWeb);

};

#endif