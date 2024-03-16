#include <iostream>
#include "chatGPT.h"
#include "Informacion.h"


std::string chatGPT::toString(){
    std::string res = "chatGPT: ";
    res += getIdentificador() + ", ";
    res += std::to_string(getInformacionDia()) + "/" + std::to_string(getInformacionMes()) + "/" + std::to_string(getInformacionAno()) + ", ";
    res += Pregunta + Respuesta;
    return res;
};