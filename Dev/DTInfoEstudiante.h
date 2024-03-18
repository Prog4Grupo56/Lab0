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
    string getidInfo();

    ostream& operator<<(ostream& os);

    ~DTInfoEstudiante();
};

#endif