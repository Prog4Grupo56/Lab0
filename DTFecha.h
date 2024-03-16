#ifndef DTFECHA
#define DTFECHA

class DTFecha {
    private:
        int Dia, Mes, Ano;
    public:
        DTFecha(); // constructor por defecto
        DTFecha(int dia, int mes, int ano); // constructor por parámetros
        int getDia();
        int getMes();
        int getAno();
        DTFecha setFecha(int dia, int mes, int ano); // devuelve un DTFecha pues no debe modificar el estado del datatype
        ~DTFecha(); // destructor
};

#endif