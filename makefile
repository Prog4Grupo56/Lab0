TARGET  = Lab0
SRC_DIR = ./src
INC_DIR = ./include
OBJ_DIR = ./obj
OBJ     = Lab0.o ChatGPT.o DTFecha.o Informacion.o Libro.o PaginaWeb.o Estudiante.o   # Agrega Estudiante.o a la lista de objetos
CFLAGS  = -Wall 

#CREA EL EJECUTABLE
$(TARGET): $(addprefix $(OBJ_DIR)/, $(OBJ))
	g++ $(CFLAGS) $^ -o $@

#COMPILAR LOS ARCHIVOS CPP
$(OBJ_DIR)/Lab0.o: Lab0.cpp $(INC_DIR)/DTFecha.h $(INC_DIR)/Informacion.h $(INC_DIR)/Libro.h $(INC_DIR)/PaginaWeb.h $(INC_DIR)/ChatGPT.h
	g++ -c $(CFLAGS) $< -o $@

$(OBJ_DIR)/ChatGPT.o: $(SRC_DIR)/ChatGPT.cpp $(INC_DIR)/ChatGPT.h
	g++ -c $(CFLAGS) $< -o $@

$(OBJ_DIR)/DTFecha.o: $(SRC_DIR)/DTFecha.cpp $(INC_DIR)/DTFecha.h
	g++ -c $(CFLAGS) $< -o $@

$(OBJ_DIR)/Informacion.o: $(SRC_DIR)/Informacion.cpp $(INC_DIR)/Informacion.h
	g++ -c $(CFLAGS) $< -o $@

$(OBJ_DIR)/Libro.o: $(SRC_DIR)/Libro.cpp $(INC_DIR)/Libro.h
	g++ -c $(CFLAGS) $< -o $@

$(OBJ_DIR)/PaginaWeb.o: $(SRC_DIR)/PaginaWeb.cpp $(INC_DIR)/PaginaWeb.h
	g++ -c $(CFLAGS) $< -o $@

$(OBJ_DIR)/Estudiante.o: $(SRC_DIR)/Estudiante.cpp $(INC_DIR)/Estudiante.h
	g++ -c $(CFLAGS) $< -o $@

#BORRA LOS .o Y EL EJECUTABLE SI EXISTEN
.PHONY: clean
clean:
	rm -f $(OBJ_DIR)/*.o $(TARGET)

#EJECUTAR EL PROGRAMA
.PHONY: run
run: $(TARGET)
	./$(TARGET)
