TARGET  = Lab0
DEV_DIR = ./Dev
#OBJ_DIR = .
OBJ     = Lab0.o ChatGPT.o DTFecha.o Informacion.o Libro.o PaginaWeb.o   
#Estudiante.o
CFLAGS  = -Wall 

#CREA EL EJECUTABLE
$(TARGET): $(OBJ)
	g++ $(CFLAGS) $(OBJ) -o $(TARGET)
#ERROR: No puede crear el ejecutable con todos los .o, para arreglar

#TEST:
#$(TARGET): Lab0.o
#	g++ Lab0.o -o $(TARGET)
#Logra crear un ejecutable con un .o solo

#COMPILAR LOS ARCHIVOS CPP
#Verificar si van los .h o .cpp para lab0.o
Lab0.o: Lab0.cpp $(DEV_DIR)/DTFecha.h $(DEV_DIR)/Informacion.h $(DEV_DIR)/Libro.h $(DEV_DIR)/PaginaWeb.h $(DEV_DIR)/ChatGPT.h     #$(DEV_DIR)/DTFecha.cpp $(DEV_DIR)/Informacion.cpp $(DEV_DIR)/Libro.cpp $(DEV_DIR)/PaginaWeb.cpp $(DEV_DIR)/ChatGPT.cpp $(DEV_DIR)/Estudiante.h
	g++ -c $(CFLAGS) Lab0.cpp

ChatGPT.o: $(DEV_DIR)/ChatGPT.cpp $(DEV_DIR)/ChatGPT.h
	g++ -c $(CFLAGS) $(DEV_DIR)/ChatGPT.cpp

DTFecha.o: $(DEV_DIR)/DTFecha.cpp $(DEV_DIR)/DTFecha.h
	g++ -c $(CFLAGS) $(DEV_DIR)/DTFecha.cpp

Informacion.o: $(DEV_DIR)/Informacion.cpp $(DEV_DIR)/Informacion.h
	g++ -c $(CFLAGS) $(DEV_DIR)/Informacion.cpp

Libro.o: $(DEV_DIR)/Libro.cpp $(DEV_DIR)/Libro.h
	g++ -c $(CFLAGS) $(DEV_DIR)/Libro.cpp

PaginaWeb.o: $(DEV_DIR)/PaginaWeb.cpp $(DEV_DIR)/PaginaWeb.h
	g++ -c $(CFLAGS) $(DEV_DIR)/PaginaWeb.cpp

#Estudiante.o: $(DEV_DIR)/Estudiante.h $(DEV_DIR)/Estudiante.cpp
#	g++ -c $(DEV_DIR)/Estudiante.cpp

#BORRA LOS .o Y EL EJECUTABLE SI EXISTEN
.PHONY: clean
clean:
	rm -f *.o $(TARGET)

#FALTA:
#Arreglar lo que se necesita para que compile el ejecutable final
#Crear una carpeta obj donde vayan todos los .o automáticamente