#ifndef CHATGPT
#define CHATGPT
#include <iostream>
#include "Informacion.h"

class ChatGPT : public Informacion{
    private:
        std::string Pregunta, Respuesta;
    public:
        ChatGPT(); // constructor por defecto
        ChatGPT(std::string pregunta, std::string respuesta); // constructor por parámetros
        std::string getPregunta();
        std::string getRespuesta();
        void setPregunta(std::string pregunta);
        void setRespuesta(std::string respuesta);
        std::string toString();
        ~ChatGPT(); // destructor
};

#endif
