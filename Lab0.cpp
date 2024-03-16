#include <iostream>
#include <vector>
#include "DTFecha.cpp"
#include "Informacion.cpp"
#include "Libro.cpp"

int main() {
    
    DTFecha* PrimeraFecha = new DTFecha(12, 03, 2024);
    
    std::vector<std::string> autores = {"Autor1", "Autor2", "Autor3"};
    
    Libro* PrimerLibro = new Libro(01, PrimeraFecha, "Primer Libro", autores, "El Resumen");
    
    std::cout << PrimerLibro->toString() << std::endl;
    
    delete PrimerLibro;
    delete PrimeraFecha;
    
    return 0; // si en OnlineGDB agregan la flag fsanitize=address checkea los memory leaks, por ahora da todo bien

}
