makefile:

intel: simple.o test_simple

simple.o: simple.cpp simple.h
	icpc -std=c++11 -c -qopt-report simple.cpp

test_simple: test_simple.cpp simple.o
	icpc -o test_simple -qopt-report -std=c++11 test_simple.cpp simple.o

clean:
	\rm *.o
	\rm *.optrpt
	\rm test_simple
