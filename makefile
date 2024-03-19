TARGET  = Lab0
SRC_DIR = ./src
INC_DIR = ./include
OBJ_DIR = ./obj
OBJ     =  Lab0.o ChatGPT.o DTFecha.o Informacion.o Libro.o PaginaWeb.o   
CFLAGS  = -Wall 

#CREA EL EJECUTABLE
$(TARGET): $(addprefix $(OBJ_DIR)/, $(OBJ))
	g++ $(CFLAGS) $^ -o $@

#COMPILAR LOS ARCHIVOS CPP
$(OBJ_DIR)/Lab0.o: Lab0.cpp $(INC_DIR)/DTFecha.h $(INC_DIR)/Informacion.h $(INC_DIR)/Libro.h $(INC_DIR)/PaginaWeb.h $(INC_DIR)/ChatGPT.h
	g++ -c $(CFLAGS) $< -o $@

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp $(INC_DIR)/%.h
	g++ -c $(CFLAGS) $< -o $@

#BORRA LOS .o Y EL EJECUTABLE SI EXISTEN
.PHONY: clean
clean:
	rm -f $(OBJ_DIR)/*.o $(TARGET)

#EJECUTAR EL PROGRAMA
.PHONY: run
run: $(TARGET)
	./$(TARGET)
