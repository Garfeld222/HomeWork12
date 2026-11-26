#include "Complex.h"
#include <cmath>

Complex::Complex() {
    re = 0;
    im = 0;
}

Complex::Complex(double r, double i) {
    re = r;
    im = i;
}

Complex::Complex(const Complex& other) {
    re = other.re;
    im = other.im;
}

Complex::~Complex() {
}

void Complex::Show() const {
    if (im >= 0) {
        cout << re << " + " << im << "i" << endl;
    }
    else {
        cout << re << " - " << -im << "i" << endl;
    }
}

Complex& Complex::operator=(const Complex& other) {
    if (this != &other) {
        re = other.re;
        im = other.im;
    }
    return *this;
}

Complex Complex::operator+(const Complex& other) const {
    return Complex(re + other.re, im + other.im);
}

Complex Complex::operator-(const Complex& other) const {
    return Complex(re - other.re, im - other.im);
}

Complex Complex::operator*(const Complex& other) const {
    double newRe = re * other.re - im * other.im;
    double newIm = re * other.im + im * other.re;
    return Complex(newRe, newIm);
}

Complex& Complex::operator+=(const Complex& other) {
    re += other.re;
    im += other.im;
    return *this;
}

Complex& Complex::operator++() {
    re += 1;
    return *this;
}

Complex Complex::operator++(int) {
    Complex temp(*this);
    re += 1;
    return temp;
}

bool Complex::operator>(const Complex& other) const {
    double mod1 = sqrt(re * re + im * im);
    double mod2 = sqrt(other.re * other.re + other.im * other.im);
    return mod1 > mod2;
}

ostream& operator<<(ostream& out, const Complex& c) {
    if (c.im >= 0) {
        out << c.re << " + " << c.im << "i";
    }
    else {
        out << c.re << " - " << -c.im << "i";
    }
    return out;
}

istream& operator>>(istream& in, Complex& c) {
    cout << "Enter real part: ";
    in >> c.re;
    cout << "Enter imaginary part: ";
    in >> c.im;
    return in;
}
