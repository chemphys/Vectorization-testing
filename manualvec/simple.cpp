#include "simple.h"

//void vectorMult (std::vector<double> a, size_t alen, std::vector<double> b,
//               size_t blen, std::vector<double> &c) {
//
//  for (size_t i = 0; i < alen; i++) {
//    c[i] = a[i]*b[i];
//  }
//}

void vectorMult (double * a, size_t alen, 
                 double * b, size_t blen, 
                 double * c) {

  for (size_t i = 0; i < alen; i+=2) {
    __m128d v1 = _mm_set_pd(a[i], a[i+1]);
    __m128d v2 = _mm_set_pd(b[i], b[i+1]);
    __m128d v3 = _mm_mul_pd(v1,v2);
    _mm_store_sd(c + i*2, v3);
  }

}

void vectorAdd2 (std::vector<double> a, std::vector<double> b,
                 std::vector <double> &c) {
}
