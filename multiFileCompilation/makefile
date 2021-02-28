file: main.o file.o
	g++ main.o file.o -o file -std=c++2a

main.o: main.cpp
	g++ -c main.cpp -std=c++2a

file.o: file.cpp
	g++ -c file.cpp -std=c++2a

run: 
	./file

clean:
	rm *.o file