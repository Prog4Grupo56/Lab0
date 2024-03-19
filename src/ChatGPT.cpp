#include "ChatGPT.h"

//constructor defecto
ChatGPT::ChatGPT():Informacion(){
    Pregunta =  "";
    Respuesta = "";
}

//constructor por parámetros
ChatGPT::ChatGPT(string pregunta, string respuesta, int id, DTFecha* fecha):Informacion(id, fecha){
    Pregunta = pregunta;
    Respuesta = respuesta;
}

//destructor
ChatGPT::~ChatGPT(){}

string ChatGPT::getPregunta(){
    return Pregunta;
}

string ChatGPT::getRespuesta(){
    return Respuesta;
}

void ChatGPT::setPregunta (string pregunta){
    Pregunta = pregunta;
}

void ChatGPT::setRespuesta (string respuesta){
    Respuesta = respuesta;
}

string ChatGPT::toString(){
    string res = "chatGPT: ";
    res += getIdentificador() + ", ";
    res += getStringFecha() + ", ";
    res += Pregunta + Respuesta;
    return res;
};