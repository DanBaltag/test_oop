MOB=g++ -c
OB=Aeroport.o Avion.o Autocar.o Pasager.o main.o
EXE=./lab2.exe
TIME=1

all:  $(EXE)
	$(EXE)

$(EXE): $(OB) 
	g++ -o lab2.exe $(OB)

Aeroport.o: Aeroport.cpp
	$(MOB) Aeroport.cpp

Avion.o: Avion.cpp
	$(MOB) Avion.cpp

Autocar.o: Autocar.cpp
	$(MOB) Autocar.cpp

Pasager.o: Pasager.cpp
	$(MOB) Pasager.cpp

main.o: main.cpp
	$(MOB) main.cpp

clear: $(EXE)
	rm $(OB) $(EXE)

