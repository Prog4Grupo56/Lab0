#include "include/DTFecha.h"
#include "include/Estudiante.h"
#include "include/Informacion.h"
#include "include/ChatGPT.h"
#include "include/Libro.h"
#include "include/PaginaWeb.h"
#include "include/DTInfoEstudiante.h"
#include "include/Funciones.h"

int main() {
    
    // Inicio del Main

    vector<Informacion*> conjuntoInformacion ;
    vector<Estudiante*> conjuntoEstudiante ;

    // a) 
    
    // Crear PrimeraPaginaWeb
    PaginaWeb* PrimeraPaginaWeb = new PaginaWeb(
        1, 
        DTFecha(7,3,2024),
        "Programación 4 Guía Semana 1 (4/3)", 
        "https://eva.fing.edu.uy/pluginfile.php/468051/mod_resource/content/4/Guia01_P42024_IntroCBasicos.pdf", 
        "El objetivo de esta semana es contextualizar el paradigma de Orientación a Objetos (OO) en el marco de la Ingeniería de Software, así como comenzar a ver sus conceptos básicos y cómo éstos se implementan en C++."
    );
    conjuntoInformacion.push_back(PrimeraPaginaWeb);

    // Crear SegundaPaginaWeb
    PaginaWeb* SegundaPaginaWeb = new PaginaWeb(
        2, 
        DTFecha(5,3,2024),
        "Programación orientada a objetos", 
        "https://es.wikipedia.org/wiki/Programaci%C3%B3n_orientada_a_objetos", 
        "La programación orientada a objetos (POO, en español) es un paradigma de programación que parte del concepto de \"objetos\" como base, los cuales contienen información en forma de campos (a veces también referidos como atributos o propiedades) y código en forma de métodos. Algunas características clave de la programación orientada a objetos son herencia, cohesión, abstracción, polimorfismo, acoplamiento y encapsulamiento."
    ); 
    conjuntoInformacion.push_back(SegundaPaginaWeb);

    // b)

    // Crear PrimerChatGPT
    ChatGPT* PrimerChatGPT = new ChatGPT(
        3,
        DTFecha(8,3,2024),
        "¿Qué es el polimorfismo en orientación a objetos?",
        "El polimorfismo en programación orientada a objetos se refiere a la capacidad de un objeto de tomar múltiples formas. Puede ser estático, resuelto en tiempo de compilación, basado en la herencia, o dinámico, resuelto en tiempo de ejecución, asociado a interfaces o métodos abstractos. En esencia, permite que objetos de diferentes clases respondan a la misma interfaz de manera coherente, facilitando la flexibilidad y extensibilidad del código."
    );
    conjuntoInformacion.push_back(PrimerChatGPT);
    // Crear SegundoChatGPT
    ChatGPT* SegundoChatGPT = new ChatGPT(
        4,
        DTFecha(5,3,2024),
        "¿Qué es el acoplamiento en orientación a objetos?",
        "El acoplamiento en programación orientada a objetos se refiere al grado de dependencia entre las clases o módulos de un sistema. Un bajo acoplamiento es deseable, ya que implica que las clases son independientes entre sí, lo que facilita la modificación, mantenimiento y reutilización del código. Por otro lado, un alto acoplamiento indica una fuerte interdependencia entre las clases, lo que puede hacer que el sistema sea más difícil de entender, modificar y mantener."
    );
    conjuntoInformacion.push_back(SegundoChatGPT);

    // c)

    // Crear PrimerLibro
    Libro* PrimerLibro = new Libro(
        5,
        DTFecha(15,3,2024),
        "Applying UML and Patterns: An Introduction to Object-Oriented Analysis and Design and Iterative Development",
        {"Craig Larman"},
        "Applying UML and Patterns is the world’s #1 business and college introduction to “thinking in objects”―and using that insight in real-world objectoriented analysis and design. Building on two widely acclaimed previous editions, Craig Larman has updated this book to fully reflect the new UML 2 standard, to help you master the art of object design, and to promote high-impact, iterative, and skillful agile modeling practices."
    );
    conjuntoInformacion.push_back(PrimerLibro);

    // d)

    cout << "Imprimimos el método toString() de cada objeto.\n\n";

    cout << PrimeraPaginaWeb->toString() << "\n\n";
    cout << SegundaPaginaWeb->toString() << "\n\n";
    cout << PrimerChatGPT->toString() << "\n\n";
    cout << SegundoChatGPT->toString() << "\n\n";
    cout << PrimerLibro->toString() << "\n\n";

    // e)

    // Crear PrimerEstudiante
    Estudiante* PrimerEstudiante = new Estudiante("Alex García", 52365899, "ag5678@gmail.com");
    conjuntoEstudiante.push_back(PrimerEstudiante);
    // Crear SegundoEstudiante
    Estudiante* SegundoEstudiante = new Estudiante("Betina Gonzalez", 49891239, "beg999@gmail.com");
    conjuntoEstudiante.push_back(SegundoEstudiante);

    // f)

    PrimerEstudiante->setInfo(PrimeraPaginaWeb);
    PrimerEstudiante->setInfo(SegundaPaginaWeb); 
    PrimerEstudiante->setInfo(PrimerChatGPT);
    SegundoEstudiante->setInfo(PrimerChatGPT);
    SegundoEstudiante->setInfo(SegundoChatGPT);
    SegundoEstudiante->setInfo(PrimerLibro);
    PrimeraPaginaWeb->setEstudiante(PrimerEstudiante);
    SegundaPaginaWeb->setEstudiante(PrimerEstudiante);
    PrimerChatGPT->setEstudiante(PrimerEstudiante);
    PrimerChatGPT->setEstudiante(SegundoEstudiante);
    SegundoChatGPT->setEstudiante(SegundoEstudiante);
    PrimerLibro->setEstudiante(SegundoEstudiante);

    // g)

    set<string> infoPrimerEstudiante = PrimerEstudiante->listarInfo(DTFecha(8,3,2024));
    set<string> infoSegundoEstudiante = SegundoEstudiante->listarInfo(DTFecha(8,3,2024));

    cout << "Imprimimos la lista de información de cada estudiante.\n\n";

    imprimirListaDesde(infoPrimerEstudiante);
    imprimirListaDesde(infoSegundoEstudiante);

    // h)

    string palabraBuscar = "polimorfismo";

    vector<DTInfoEstudiante> resultado = buscarEnInfo(palabraBuscar, conjuntoInformacion); // preguntar a profe si esta bien mandar solo conjuntoInformacion

    cout << "Imprimimos los pares de informacion y estudiante encontrados al buscar: " + palabraBuscar + ".\n\n";

    for (long long unsigned int i = 0; i < resultado.size(); i++)
    {
        cout << resultado[i] << "\n"; // Esto no se pasa a una funcion por separado, asi mostramos que usamos la sobrecarga de <<
    }

    cout << "\n";

    // i)

    // Borramos un objeto de clase Informacion

    eliminarInfo(3, conjuntoInformacion);           // Mantiene el conjunto informacion, lo paso por referencia
    delete PrimerChatGPT;                           // El destructor ya borra los Links
    
    // No debería aparecer la Informacion con id=3 al buscar polimorfismo
    vector<DTInfoEstudiante> resultadoDespuesDeBorrar = buscarEnInfo("polimorfismo", conjuntoInformacion);

    cout << "Imprimimos los pares despues de borrar la informacion con id=3.\n\n";

    for (long long unsigned int i = 0; i < resultadoDespuesDeBorrar.size(); i++)
    {
        cout << resultadoDespuesDeBorrar[i] << "\n"; 
    }

    cout << "\n";

    // Finalizamos liberando toda la memoria

    delete PrimeraPaginaWeb;
    delete SegundaPaginaWeb;
    delete SegundoChatGPT;
    delete PrimerLibro;
    delete PrimerEstudiante;
    delete SegundoEstudiante;
    
    return 0;

}
