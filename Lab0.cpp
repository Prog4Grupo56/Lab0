#include "include/Informacion.h"
#include "include/ChatGPT.h"
#include "include/DTFecha.h"
#include "include/Libro.h"
#include "include/PaginaWeb.h"
#include "include/Estudiante.h"

int main() {
    
    // Creo fecha de prueba
    DTFecha* PrimeraFecha = new DTFecha(12, 03, 2024);
    // Creo autores de prueba
    vector<string> autores = {"Autor1", "Autor2", "Autor3"};
    // Creo pruebas
    Libro* PrimerLibro = new Libro(01, PrimeraFecha, "Primer Libro", autores, "El Resumen");
    PaginaWeb* PrimeraPagina = new PaginaWeb(02, PrimeraFecha, "Titulo de Pagina", "pagina.com", "operadores"); 
    ChatGPT* PrimerChat = new ChatGPT(03, PrimeraFecha, "Preguntando?", "Respondiendo");
    Estudiante* PrimerEstudiante = new Estudiante("Diego", 220, "tuMail@gmail.com");
    // Imprimo
    cout << PrimerLibro << endl;
    cout << PrimeraPagina << endl;
    cout << PrimerChat << endl;
    cout << PrimerEstudiante << endl;
    // Borro la memoria
    delete PrimerLibro;
    delete PrimeraPagina;
    delete PrimerChat;
    delete PrimerEstudiante;
    delete PrimeraFecha;


    // Inicio del Main

    bool Salir = false;

    try
    {
        // Aca va a estar nuestro codigo de main
        while (!Salir)
        {
            string msg;
            cout << "Seleccione una opción [ 0 | 1 ]\n";
            cout << "\t1)Agregar Libro\n";
            cout << "\t0)Salir\n";
            cin >> msg ;
            if (msg=="0" || msg=="Salir" || msg=="salir"){
                Salir=true;
            }
            if (msg=="1"){

                int Dia,Mes,Ano;
                cout << "Ingrese Dia: ";
                cin >> Dia;
                cout << "Ingrese Mes: ";
                cin >> Mes;
                cout << "Ingrese Año: ";
                cin >> Ano;
                DTFecha* Fecha = new DTFecha(Dia, Mes, Ano);
                cout << "\nFecha: " << Fecha->toString() << "\n\n";
                delete Fecha;

            }
        }
        
    }
    catch(const exception& e)
    {
        cerr << e.what() << '\n';
    }
    
    return 0;

}
