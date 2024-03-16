#include <iostream>
#include <vector>

class Fecha;
class Informacion;
class Libro;
class ChatGPT;
class PaginaWeb;
class DTInfoEstudiante;

class Fecha { // Clase Fecha
    private:
        int Dia;
        int Mes;
        int Ano;
    public:
        // Constructor
        Fecha(int _Dia, int _Mes, int _Ano): Dia(_Dia), Mes(_Mes), Ano(_Ano) {}
        // Getters
        int getDia() { int res = Dia; return res; }
        int getMes() { return Mes; }
        int getAno() { return Ano; }
        // Setters
        void setDia(int _Dia){  Dia=_Dia; }
        void setMes(int _Mes){  Mes=_Mes; }
        void setAno(int _Ano){  Ano=_Ano; }
};
    
class Informacion { // Clase Información 
private:
    int identificador;
    Fecha* DTFecha;
public:
    Informacion(int id, Fecha* fecha): identificador(id), DTFecha(fecha) {} // Constructor
    // Metodos
    virtual std::string toString() { return ""; }
    // Getters
    int getIdentificador(){ return identificador; }
    int getInfoDia(){ return DTFecha->getDia(); }
    int getInfoMes(){ return DTFecha->getMes(); }
    int getInfoAno(){ return DTFecha->getAno(); }
    // Setters
    void setIdentificador(int _identificador){ identificador=_identificador; }
    void setDTFecha( Fecha* _DTFecha ){ DTFecha=_DTFecha; }
};
    
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
