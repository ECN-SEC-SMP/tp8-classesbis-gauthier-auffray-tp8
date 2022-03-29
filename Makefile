all : prog_tp8

rebuild : clean all

clean :
	del *.o

prog_tp8 : main.o Attaque.o Animal.o Lion.o Ours.o Pierre.o Loup.o
	g++ -o prog_tp8.exe main.o Attaque.o Animal.o Lion.o Ours.o Pierre.o Loup.o

main.o : main.cpp
	g++ -o main.o -c main.cpp

Attaque.o : Attaque.cpp
	g++ -o Attaque.o -c Attaque.cpp

Animal.o : Animal.cpp
	g++ -o Animal.o -c Animal.cpp

Lion.o : Lion.cpp
	g++ -o Lion.o -c Lion.cpp

Ours.o : Ours.cpp
	g++ -o Ours.o -c Ours.cpp

Pierre.o : Pierre.cpp
	g++ -o Pierre.o -c Pierre.cpp

Loup.o : Loup.cpp
	g++ -o Loup.o -c Loup.cpp