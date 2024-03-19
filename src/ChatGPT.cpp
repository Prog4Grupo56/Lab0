#include "../include/ChatGPT.h"

// Constructor
ChatGPT::ChatGPT(int _id, DTFecha* _fecha, string _pregunta, string _respuesta): Informacion(_id, _fecha), pregunta(_pregunta), respuesta(_respuesta) { }
// Destructor
ChatGPT::~ChatGPT(){}
// Getters
string ChatGPT::getPregunta(){ return pregunta; }
string ChatGPT::getRespuesta(){ return respuesta; }
// Setters
void ChatGPT::setPregunta (string _pregunta){ pregunta = _pregunta; }
void ChatGPT::setRespuesta (string _respuesta){ respuesta = _respuesta; }
// Metodos
string ChatGPT::toString(){
    string res = "chatGPT: ";
    res += getIdentificador() + ", ";
    res += getStringFecha() + ", ";
    res += pregunta + respuesta;
    return res;
};