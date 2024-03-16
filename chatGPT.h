#ifndef CHATGPT
#define CHATGPT

#include <iostream>

class chatGPT{
    private:
        std::string Pregunta, Respuesta;
    public:
        chatGPT(); // constructor por defecto
        chatGPT(std::string pregunta, std::string respuesta); // constructor por parámetros
        std::string getPregunta();
        std::string getRespuesta();
        void setPregunta(std::string pregunta);
        void setRespuesta(std::string respuesta);
        std::string toString();
        ~chatGPT(); // destructor
};

#endif CHATGPT
