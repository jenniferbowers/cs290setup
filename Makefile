all: testing

testing: labtest.o nodeFunctions.o
	g++ -g labtest.o node.hpp nodeFunctions.o -o testing
	
labtest.o: labtest.cpp
	g++ -c labtest.cpp
	
nodeFunctions.o: nodeFunctions.cpp
	g++ -c nodeFunctions.cpp
	
clean:
	rm *.o testing