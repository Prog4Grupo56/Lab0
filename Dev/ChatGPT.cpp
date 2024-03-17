#include "ChatGPT.h"

std::string ChatGPT::toString(){
    std::string res = "chatGPT: ";
    res += getIdentificador() + ", ";
    res += getStringFecha() + ", ";
    res += Pregunta + Respuesta;
    return res;
};