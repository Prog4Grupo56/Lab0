#include "include/Informacion.h"
#include "include/ChatGPT.h"
#include "include/DTFecha.h"
#include "include/Libro.h"
#include "include/PaginaWeb.h"
#include "include/Estudiante.h"
#include "include/DTInfoEstudiante.h"

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
         vector<Informacion*> informacionVector;
        cout << "\nPara salir escriba 0\n\n";
        while (!Salir) 
        {
            string msg;
            
            cin >> msg ;
            if (msg=="0" || msg=="Salir" || msg=="salir"){
                Salir=true;
            }
            if (msg.substr(0, 10) == "crearLibro"){
                
                vector<string> palabras;
                int inicio = 0;
                for (long long unsigned int i = 0; i < msg.length(); i++) {
                    if (msg[i] == ' ' || msg[i] == '\0') {
                        palabras.push_back(msg.substr(inicio, i - inicio)); 
                        inicio = i + 1; 
                    }
                }

            }
        }
        
    }
    catch(const exception& e)
    {
        cerr << e.what() << '\n';
    }
    
    return 0;

}
