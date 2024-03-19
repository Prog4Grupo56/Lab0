#include <iostream>
#include <vector>
#include "Dev/DTFecha.cpp"
#include "Dev/Informacion.cpp"
#include "Dev/Libro.cpp"
#include "Dev/PaginaWeb.cpp"
#include "Dev/ChatGPT.cpp"
using namespace std;

int main() {
    
    DTFecha* PrimeraFecha = new DTFecha(12, 03, 2024);
    
    vector<string> autores = {"Autor1", "Autor2", "Autor3"};
    
    Libro* PrimerLibro = new Libro(01, PrimeraFecha, "Primer Libro", autores, "El Resumen");

    PaginaWeb* PrimeraPagina = new PaginaWeb(02, PrimeraFecha, "Titulo de Pagina", "pagina.com", "operadores");

    cout << PrimerLibro << endl;

    cout << PrimeraPagina << endl;

    delete PrimerLibro;
    delete PrimeraPagina;
    delete PrimeraFecha;

    bool Salir = false;

    try
    {
        // Aca va a estar nuestro codigo de main
        while (!Salir)
        {
            string msg;
            cout << "Seleccione una opción:\n";
            cout << "\t1)Agregar Libro\n";
            cout << "\t2)Agregar Página Web\n";
            cout << "\t0)Salir\n";
            cin >> msg ;
            if (msg=="0"){
                Salir=true;
            }
            if (msg=="1"){
                
            }
            if (msg=="2"){
                
            }
        }
        
    }
    catch(const exception& e)
    {
        cerr << e.what() << '\n';
    }
    
    return 0;

}
