Tetris5: tetris5.o genMino.o Mino.o MinoI.o MinoS.o MinoN.o MinoO.o
	g++ -o Tetris5 tetris5.o genMino.o Mino.o MinoI.o MinoS.o MinoN.o MinoO.o

tetris5.o: tetris5.cpp genMino.h
	g++ -c tetris5.cpp

genMino.o: genMino.cpp genMino.h Mino.h MinoS.h MinoI.h MinoN.h MinoO.h
	g++ -c genMino.cpp

Mino.o: Mino.cpp Mino.h
	g++ -c Mino.cpp

MinoI.o: MinoI.cpp MinoI.h
	g++ -c MinoI.cpp

MinoS.o: MinoS.cpp MinoS.h
	g++ -c MinoS.cpp

MinoN.o: MinoN.cpp MinoN.h
	g++ -c MinoN.cpp

MinoO.o: MinoO.cpp MinoO.h
	g++ -c MinoO.cpp

clean:
	rm Tetris5 *.o
