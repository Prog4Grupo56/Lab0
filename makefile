obj= ChatGPT.o DTFecha.o Informacion.o Libro.o PaginaWeb.o #Estudiante.o
comp= g++ #Compilador


lab0: lab0.exe #Solamente hay que ver si el ejecutable esta actualizado



#Compilar archivos fuente
#El -c es para que solamente compile, sin linkear
ChatGPT.o: ChatGPT.h ChatGPT.cpp
	$(comp) -c ChatGPT.cpp -Wall
DTFecha.o: DTFecha.h DTFecha.cpp
	$(comp) -c DTFecha.cpp -Wall
Informacion.o: Informacion.h Informacion.cpp
	$(comp) -c Informacion.cpp -Wall
Libro.o: Libro.h Libro.cpp
	$(comp) -c Libro.cpp
PaginaWeb.o: PaginaWeb.h PaginaWeb.cpp
	$(comp) -c PaginaWeb.cpp
#Estudiante.o: Estudiante.h Estudiante.cpp
#	$(comp) -c Estudiante.cpp

#Actualizar ejecutable
lab0.exe:  $(obj)
	$(comp) $(obj) -o lab0.exe

#Unicamente para hacer una compilacion completa
#make limpiar
limpiar:
	rm $(obj)
	rm lab0.exe