#include <iostream>
#include <vector>
#include <./DTFecha.h>
#include <./DTFecha.cpp>
#include <./Informacion.h>
#include <./Informacion.cpp>
    
    
class Libro: public Informacion { // Clase Libro que extiende de Información
private:
    std::string titulo;
    std::vector<std::string> autores;
    std::string resumen;
public:
    // Constructor
    Libro(int id, DTFecha* fecha, std::string titulo_, std::vector<std::string> autores_, std::string resumen_) 
        : Informacion(id, fecha), titulo(titulo_), autores(autores_), resumen(resumen_) {} // Constructor (un toque largo)
    // Destructor
    ~Libro() {} 
    // Getters
    std::string getTitulo(){ return titulo; }
    std::vector<std::string> getAutores(){ return autores; }
    std::string getResumen(){ return resumen; }
    std::string toString();
};

std::string Libro::toString() {
    std::string result = "Libro: ";
    result += std::to_string(getIdentificador()) + ", ";
    result += std::to_string(getInformacionDia()) + "/" + std::to_string(getInformacionMes()) + "/" + std::to_string(getInformacionAno()) + ", "; // Descomentar esta línea
    result += titulo + ", ";

    result += "Autores: ";
    for (size_t i = 0; i < autores.size(); ++i) {
        result += autores[i];
        if (i != autores.size() - 1)
            result += ", ";
    }
    result += ", ";

    result += resumen;

    return result;
}


int main() {
    
    Fecha* PrimeraFecha = new Fecha(12, 03, 2024);
    
    std::vector<std::string> autores = {"Autor1", "Autor2", "Autor3"};
    
    Libro* PrimerLibro = new Libro(01, PrimeraFecha, "Primer Libro", autores, "El Resumen");
    
    std::cout << PrimerLibro->toString() << std::endl;
    
    delete PrimerLibro;
    delete PrimeraFecha;
    
    return 0; // si en OnlineGDB agregan la flag fsanitize=address checkea los memory leaks, por ahora da todo bien

}
