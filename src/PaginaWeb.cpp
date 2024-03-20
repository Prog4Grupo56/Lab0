#include "../include/PaginaWeb.h"

// Constructor
PaginaWeb::PaginaWeb(int _id, DTFecha* _fecha, string _titulo, string _url, string _textoDeInteres) 
: Informacion(_id, _fecha), titulo(_titulo), url(_url), textoDeInteres(_textoDeInteres) {}
// Destructor
PaginaWeb::~PaginaWeb(){}
// Getters
string PaginaWeb::getTitulo(){ return titulo; }
string PaginaWeb::getUrl(){ return url; }
string PaginaWeb::getTextoDeInteres(){ return textoDeInteres; }
// Setters
void PaginaWeb::setTitulo(string _titulo){ titulo=_titulo; }
void PaginaWeb::setUrl(string _url){ url=_url; }
void PaginaWeb::setTextoDeInteres(string _textoDeInteres){ textoDeInteres=_textoDeInteres; }
// Metodos
string PaginaWeb::toString(){
    return to_string(getIdentificador()) + ", " + getStringFecha() + ", " + getTitulo() + ", " + getUrl() + ", " + getTextoDeInteres();
}
// Sobrecarga de <<
ostream& operator<<(ostream& os, PaginaWeb* paginaWeb) {
    os << paginaWeb->toString();
    return os;
}