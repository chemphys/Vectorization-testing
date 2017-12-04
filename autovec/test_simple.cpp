#include <iostream>
#include <vector>
#include <string>
#include <chrono>
using namespace std::chrono;
#include "simple.h"

int main(int argc, char** argv) {
	std::vector<double> a (10500, 3);
	std::vector<double> b (10500, 2);
	std::vector<double> c (10500, 0);

	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	vectorMult (a, 500, b, 500, c);
	high_resolution_clock::time_point t2 = high_resolution_clock::now();

	auto duration = duration_cast<microseconds>( t2 - t1 ).count();

	std::cout << duration << "\n";
	return 0;
}
