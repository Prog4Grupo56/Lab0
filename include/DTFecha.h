#include <iostream>
#ifndef DTFECHA
#define DTFECHA
using namespace std;

class DTFecha {
    private:
        int dia, mes, ano;
    public:
        // Constructor por defecto
        DTFecha();
        // Constructor
        DTFecha(int _dia, int _mes, int _ano);
        // Destructor
        ~DTFecha();
        // Getters
        int getDia();
        int getMes();
        int getAno();
        // Setters
        DTFecha setFecha(int dia, int mes, int ano);
        // Metodos
        string toString();
};

#endif