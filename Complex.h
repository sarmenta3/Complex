// Header file prototype
//Samuel Armenta
//Assignment 5
//Complex.h
//This program inputs real and imaginary numbers into mathematic equations, and 
//outputs the equations results

#include <iostream>
using namespace std;

#ifndef COMPLEX_H
#define COMPLEX_H

class Complex //Class Complex
{
public:
	friend std::ostream& operator<<(std::ostream&, const Complex&);//output operation overlaod prototype
	friend std::istream& operator>>(std::istream&, Complex&);//intput operation overlaod prototype
	explicit Complex(double = 0.0, double = 0.0); // constructor
	Complex operator+(const Complex &) const; // addition operation overlaod prototype
	Complex operator-(const Complex &) const; // subtraction operation overlaod prototype
	Complex operator*(const Complex &) const; // multiplication operation overlaod prototype
	Complex operator/(const Complex &) const; //division operation overlaod prototype
	Complex operator=(const Complex &); //=operation overlaod prototype
	bool operator!=(const Complex &) const; //!=operation overlaod prototype
	bool operator==(const Complex &) const;//== operation overlaod prototype

private:
	double real; // real part
	double imaginary; // imaginary part
}; // end class Complex
#endif

