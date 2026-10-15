#include "complex.hpp"
#include <cmath>

Complex::Complex(double real) : re(real) {
}

Complex::Complex(double real, double imag) : re(real), im(imag) {
}

double Complex::real() {
  // Return real component
  return (re);
}

/* Add definition of a member function to access the imaginary component */

double Complex::imag () {
  return (im);
}

Complex Complex::conj() {
  // Return complex conjugate
  return (Complex {re, im * -1});
}

/* Add definition of 'norm' member function. Hint: Look up std::sqrt from the
cmath header to help calculate the magnitude of a complex number */
double Complex::norm () {
  return (sqrt ((re * re) + (im * im)));
}

/* Add definition of 'add' member function */
Complex Complex::add (Complex other_complex) {
  return Complex {re + other_complex.re, im + other_complex.im};
}


bool Complex::equals(Complex other_complex) {
  // Return true if the real and imaginary parts of the complex numbers are
  // equal. False otherwise.
  if ((re == other_complex.re) && (im == other_complex.im)) {
    return (true);
  }
  else {
    return (false);
  }
}
