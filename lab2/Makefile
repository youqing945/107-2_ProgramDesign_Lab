Main: main.o playerdata.o
	g++ -o Main main.o playerdata.o

main.o: main.cpp playerdata.h
	g++ -c main.cpp

playerdata.o: playerdata.cpp playerdata.h
	g++ -c playerdata.cpp

clean:
	rm Main *.o
