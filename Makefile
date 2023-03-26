grille : main.o graph.o 
	g++ -Wall main.o graph.o  -o grille

graph.o : graph.cpp graph.h
	g++ -Wall -c graph.cpp

main.o : main.cpp 
	g++ -Wall -c main.cpp


clean :
	rm *.o