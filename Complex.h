#pragma once
#include <iostream>

using namespace std;

class Complex {
private:
    double re;
    double im;

public:
    Complex();
    Complex(double r, double i);
    Complex(const Complex& other);
    ~Complex();

    void Show() const;

    Complex& operator=(const Complex& other);
    Complex operator+(const Complex& other) const;
    Complex operator*(const Complex& other) const;

    Complex operator-(const Complex& other) const;
    Complex& operator+=(const Complex& other);
    Complex& operator++();
    Complex operator++(int);
    bool operator>(const Complex& other) const;

    friend ostream& operator<<(ostream& out, const Complex& c);
    friend istream& operator>>(istream& in, Complex& c);
};
