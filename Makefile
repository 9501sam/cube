run: q2
	./q2
q2: q2.o Cube.o
	g++ q2.o Cube.o -o q2
q2.o: q2.cpp
	g++ -c q2.cpp -o q2.o
Cube.o: Cube.cpp
	g++ -c Cube.cpp -o Cube.o
clean:
	rm -rf *o q2
