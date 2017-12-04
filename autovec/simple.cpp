#include "simple.h"

void vectorMult (std::vector<double> a, size_t alen, std::vector<double> b,
               size_t blen, std::vector<double> &c) {

  for (size_t i = 0; i < alen; i++) {
    c[i] = a[i]*b[i];
  }
}

void vectorAdd2 (std::vector<double> a, std::vector<double> b,
                 std::vector <double> &c) {
}
