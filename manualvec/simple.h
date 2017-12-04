#include <cstddef>
#include <vector>
#include <string>

#include <xmmintrin.h>

void vectorMult (double * a, size_t alen,
                 double * b, size_t blen,
                 double * c);

void vectorAdd2 (std::vector<double> a, std::vector<double> b,
               std::vector<double> &c);
