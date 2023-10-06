#include "mbed.h"
#include "Complex_C.hpp"

ComplexNumber_C complexAdd(const ComplexNumber_C a, const ComplexNumber_C b) {
    ComplexNumber_C y = a;
    y.real += b.real;
    y.imag += b.imag;
    return y;
}

ComplexNumber_C complexMultiply(const ComplexNumber_C a, const ComplexNumber_C b) {
    ComplexNumber_C y = a;
    y.real = b.real * y.real;
    y.imag = b.imag * y.real;
    return y;
}

ComplexNumber_C complexConjugate(const ComplexNumber_C a, const ComplexNumber_C b) {
    ComplexNumber_C y = a;
    y.imag = y.imag * -1;
    return y;
}

ComplexNumber_C complexNegate(const ComplexNumber_C a, const ComplexNumber_C b) {
    ComplexNumber_C y = a;
    y.real = y.real * -1;
    y.imag = y.imag * -1;
    return y;
}

ComplexNumber_C complexDivide(const ComplexNumber_C a, const ComplexNumber_C b) {
    ComplexNumber_C y = a;
    y.real = y.real/b.real;
    y.imag = y.imag/b.imag;
    return y;
}



void complexDisplay(const char *strName, const ComplexNumber_C u) {
    printf("%s = %f + j%f\n", strName, u.real, u.imag);
}

