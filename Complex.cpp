// Definition file
//Complex.cpp
//Samuel Armenta
//Assignment 5

#include <iostream>
#include <iomanip> // iomanip header file
#include <math.h> //math header file
#include "Complex.h" // Complex class definition

using namespace std;

// Constructor
Complex::Complex(double realPart, double imaginaryPart)
: real(realPart), //set real number
imaginary(imaginaryPart) //set imaginary numbeer
{
	// empty body
} // end Complex constructor

//+ operator function
Complex Complex::operator+(const Complex &operand2) const
{
	return Complex(real + operand2.real,
		imaginary + operand2.imaginary); //return sum

} // end function operator+

// - operator function
Complex Complex::operator-(const Complex &operand2) const
{
	return Complex(real - operand2.real, // return differenct
		imaginary - operand2.imaginary);

} // end function operator-

// * operator function
Complex Complex::operator*(const Complex &operand2) const
{
	return Complex(real * operand2.real - imaginary * operand2.imaginary, // return product
		real * operand2.imaginary + operand2.real * imaginary);

}//end function operator *

// / operator funtion
Complex Complex::operator/(const Complex &operand2) const
{
	if (operand2.real == 0 && operand2.imaginary == 0) throw "Division by 0"; // chech for divisor 0

	// if divisor is not 0 execute else
	else {
		//set real and number to variables to simplify division
		double a = real, //set a to real
			b = imaginary, //set b to imaginary
			c = operand2.real, // set c to second real number
			d = operand2.imaginary, // set d to second imaginary number
			div = pow(c, 2) + pow(d, 2); // set div to c + d power of 2
		return Complex((a * c + b * d) / div, (b * c - a * d) / div); // return quotient
	}//end else
}//end function operator /

// operator = function
Complex Complex::operator=(const Complex &operand2)
{
	real = operand2.real; //check if real variables are =
	imaginary = operand2.imaginary; // check if imaginary variables are =
	return *this; //return if =
}

// operator != function
bool Complex::operator!=(const Complex &operand2) const
{
	//check if real and imaginary variables !=
	if ((real != operand2.real) || (imaginary != operand2.imaginary))
		return true;
	else
		return false;
}//end function operator !=

// operator == function
bool Complex::operator==(const Complex &operand2) const
{
	//check if variables are equal to eachother
	if ((real == operand2.real) && (imaginary == operand2.imaginary))
		return true;
	else
		return false;
}//end function operator ==

// operator << function
ostream& operator<<(std::ostream& output, const Complex& operand)
{
	//format to output variables
	output << '(' << setw(2) << operand.real << ", " << setw(2) <<
		operand.imaginary << ')';
	return output; //return output

}//end function operator <<

// operator >> function
istream& operator>>(std::istream& input, Complex& operand)
{
	//format to input variables
	input.ignore();
	input >> operand.real;
	input.ignore(2);
	input >> operand.imaginary;
	input.ignore();
	return input; //return input
}//end function operator >>