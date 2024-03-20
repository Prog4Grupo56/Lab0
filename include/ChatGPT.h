#ifndef CHATGPT
#define CHATGPT
#include "Informacion.h"

class ChatGPT : public Informacion{
    private:
        string pregunta, respuesta;
    public:
        // Constructor
        ChatGPT(int _id, DTFecha _fecha, string _pregunta, string _respuesta);
        // Destructor
        ~ChatGPT();
        // Getters
        string getPregunta();
        string getRespuesta();
        // Setters
        void setPregunta(string _pregunta);
        void setRespuesta(string _respuesta);
        // Metodos
        string toString(); 
        // Sobrecarga de <<
        friend ostream& operator<<(ostream& os, ChatGPT* chat);
};

#endif