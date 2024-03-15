#include <iostream>
#include <vector> 

class Fecha { // Clase Fecha
public:
    Fecha(int Dia_, int Mes_, int Ano_): Dia(Dia_), Mes(Mes_), Ano(Ano_) {} // Constructor
    int Dia;
    int Mes;
    int Ano;
};
    
class Informacion { // Clase Información 
private:
    int identificador;
public:
    Informacion(int id, Fecha* fecha): identificador(id), DTFecha(fecha) {} // Constructor
    virtual ~Informacion() {} // Destructor
    virtual std::string toString() { return ""; } // Intenté que sea un método sin operación pero no me compilaba
    int getIdentificador(){ return identificador; } // Getter
    Fecha* DTFecha;
};
    
class Libro: public Informacion { // Clase Libro que extiende de Información
private:
    std::string titulo;
    std::vector<std::string> autores;
    std::string resumen;
public:
    Libro(int id, Fecha* fecha, std::string titulo_, std::vector<std::string> autores_, std::string resumen_) 
        : Informacion(id, fecha), titulo(titulo_), autores(autores_), resumen(resumen_) {} // Constructor (un toque largo)
    ~Libro() {} // Destructor
    std::string toString();
};

std::string Libro::toString() { // Defino toString pero para la Clase Libro

    // Las vueltas para imprimir la información del libro
    std::string result = "Libro: ";
    result += std::to_string(getIdentificador()) + ", ";
    result += std::to_string(DTFecha->Dia) + "/" + std::to_string(DTFecha->Mes) + "/" + std::to_string(DTFecha->Ano) + ", ";
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
