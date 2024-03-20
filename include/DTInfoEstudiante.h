#ifndef DTINFOESTUDIANTE
#define DTINFOESTUDIANTE

#include <iostream> 
using namespace std;

class DTInfoEstudiante
{
private:
    int CI;
    string NombreEst;
    int idInfo;
public:
    DTInfoEstudiante();
    DTInfoEstudiante(int ci, string nombre, int idinfo);

    string getNombre();
    int getCI();
    int getidInfo();

    friend ostream& operator<<(ostream& os,DTInfoEstudiante* est);

    ~DTInfoEstudiante();
};

#endif