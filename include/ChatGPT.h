#ifndef CHATGPT
#define CHATGPT
#include "Informacion.h"

class ChatGPT : public Informacion{
    private:
        string Pregunta, Respuesta;
    public:
        ChatGPT(); // constructor por defecto
        ChatGPT(string pregunta, string respuesta, int id, DTFecha* fecha); // constructor por parámetros
        string getPregunta();
        string getRespuesta();
        void setPregunta(string pregunta);
        void setRespuesta(string respuesta);
        string toString();
        ~ChatGPT(); // destructor
};

#endif