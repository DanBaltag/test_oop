OB=String.o main.o
EXE=lab3.exe

all: $(EXE)
	./$(EXE)

$(EXE): $(OB)
	g++ -o $(EXE) $(OB)

String.o : String.cpp String.hpp
	g++ -c String.cpp

main.o : main.cpp
	g++ -c main.cpp

clear: $(OB)
	rm $(OB)

clear_all: $(OB) $(EXE)
	rm $(OB) $(EXE)
