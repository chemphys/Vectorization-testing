makefile:

CXX = g++
CXXFLAGS = -std=c++11 -g -O0

all: simple.o test_simple

simple.o: simple.cpp simple.h
	$(CXX) $(CXXFLAGS) -c simple.cpp

test_simple: test_simple.cpp simple.o
	$(CXX) -o test_simple $(CXXFLAGS) test_simple.cpp simple.o

clean:
	\rm -f *.o
	\rm -f test_simple
