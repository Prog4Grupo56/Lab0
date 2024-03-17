#include "ChatGPT.h"

//constructor defecto
ChatGPT::ChatGPT(){
    Pregunta =  "";
    Respuesta = "";
}

//constructor por parámetros
ChatGPT::ChatGPT(std::string pregunta, std::string respuesta){
    Pregunta = pregunta;
    Respuesta = respuesta;
}

//destructor
ChatGPT::~ChatGPT(){}

std::string ChatGPT::getPregunta(){
    return Pregunta;
}

std::string ChatGPT::getRespuesta(){
    return Respuesta;
}

void ChatGPT::setPregunta (std::string pregunta){
    Pregunta = pregunta;
}

void ChatGPT::setRespuesta (std::string respuesta){
    Respuesta = respuesta;
}

std::string ChatGPT::toString(){
    std::string res = "chatGPT: ";
    res += getIdentificador() + ", ";
    res += getStringFecha() + ", ";
    res += Pregunta + Respuesta;
    return res;
};