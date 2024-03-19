#include <iostream>
#include <vector>
#include "include/Informacion.h"
#include "include/ChatGPT.h"
#include "include/DTFecha.h"
#include "include/Libro.h"
#include "include/PaginaWeb.h"

int main() {
    
    // Creo fecha de prueba
    DTFecha* PrimeraFecha = new DTFecha(12, 03, 2024);
    // Creo autores de prueba
    std::vector<std::string> autores = {"Autor1", "Autor2", "Autor3"};
    // Creo Libro y PaginaWeb de prueba y los imprimo
    Libro* PrimerLibro = new Libro(01, PrimeraFecha, "Primer Libro", autores, "El Resumen");
    PaginaWeb* PrimeraPagina = new PaginaWeb(02, PrimeraFecha, "Titulo de Pagina", "pagina.com", "operadores");
    std::cout << PrimerLibro << std::endl;
    std::cout << PrimeraPagina << std::endl;
    // Borro la memoria
    delete PrimerLibro;
    delete PrimeraPagina;
    delete PrimeraFecha;


    // Inicio del Main

    bool Salir = false;

    try
    {
        // Aca va a estar nuestro codigo de main
        while (!Salir)
        {
            std::string msg;
            std::cout << "Seleccione una opción:\n";
            std::cout << "\t1)Agregar Libro\n";
            std::cout << "\t2)Agregar Página Web\n";
            std::cout << "\t0)Salir\n";
            std::cin >> msg ;
            if (msg=="0"){
                Salir=true;
            }
            if (msg=="1"){
                
            }
            if (msg=="2"){
                
            }
        }
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;

}
