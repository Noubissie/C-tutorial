file: test.o main.o
	g++ main.o test.o -o file -std=c++2a

test.o: test.cpp	
	g++ -c test.cpp -std=c++2a

main.o: main.cpp	
	g++ -c main.cpp -std=c++2a

run:
	./file

clean: 
	rm *.o file
