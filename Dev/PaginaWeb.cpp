#include "PaginaWeb.h"

// Constructor
PaginaWeb::PaginaWeb(int _id, DTFecha* _fecha, std::string _titulo, std::string _url, std::string _textoDeInteres) 
: Informacion(_id, _fecha), titulo(_titulo), url(_url), textoDeInteres(_textoDeInteres) {}
// Destructor
PaginaWeb::~PaginaWeb(){}
// Getters
std::string PaginaWeb::getTitulo(){ return titulo; }
std::string PaginaWeb::getUrl(){ return url; }
std::string PaginaWeb::getTextoDeInteres(){ return textoDeInteres; }
// Setters
void PaginaWeb::setTitulo(std::string _titulo){ titulo=_titulo; }
void PaginaWeb::setUrl(std::string _url){ url=_url; }
void PaginaWeb::setTextoDeInteres(std::string _textoDeInteres){ textoDeInteres=_textoDeInteres; }
// Metodos
std::string PaginaWeb::toString(){
    return "PáginaWeb: " + std::to_string(getIdentificador()) + ", " + getStringFecha() + ", " + getTitulo() + ", " + getUrl() + ", " + getTextoDeInteres();
}
// Sobrecarga de <<
std::ostream& operator<<(std::ostream& os, PaginaWeb* paginaWeb) {
    os << paginaWeb->toString();
    return os;
}