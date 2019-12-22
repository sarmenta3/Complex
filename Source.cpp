//Main
//Samuel Armenta 
//Assignment 5
//CISP400V10A5.cpp

#include <iostream>
#include "Complex.h"
using namespace std;

//start of main
int main()
{
	//initialize variables
	Complex x;
	Complex y(4.3, 8.2);
	Complex z(3.3, 1.1);
	Complex k, l, m(0, 0.1);

	//ask user to input a real and imaginary variable for k
	cout << "Enter a complex number in the form: (a, b) for Complex object k.\n";
	cout << "(Performing >> operator overloading.)\n? ";
	cin >> k; //set k

	//output variables value
	cout << "\nThe existing Complex objects are:\n(Perfroming << operator overloading.)\n";
	cout << "x: ";
	cout << x;
	cout << "\ny: ";
	cout << y;
	cout << "\nz: ";
	cout << z;
	cout << "\nk: ";
	cout << k;
	cout << "\nl: ";
	cout << l;
	cout << "\nm: ";
	cout << m;
	cout << endl;

	cout << "\nPerforming +, = and << operators overloading.\n"; //output operators used
	x = y + z; //set x to y +z
	cout << "x = y + z:" << endl; //output math equation
	//display values
	cout << x;
	cout << " = ";
	cout << y;
	cout << " + ";
	cout << z;

	cout << "\n\nPerforming -, = and << operators overloading.\n"; //output operators used
	x = y - z; //set x to y-z
	cout << "x = y - z:" << endl; //output math equation
	//display values
	cout << x;
	cout << " = ";
	cout << y;
	cout << " - ";
	cout << z;

	cout << "\n\nPerforming *, = and << operators overloading.\n"; //output operators used
	x = y * z; // set x to y*z
	cout << "x = y * z:" << endl; //output math equation
	//display values
	cout << x;
	cout << " = ";
	cout << y;
	cout << " * ";
	cout << z;

	cout << "\n\nPerforming /, = and << operators overloading.\n";//output operators used
	//chech divisor is not 0
	try {
		x = y / z; //set x to y/z
	}//end try
	//display that quotient is infinite if divisor is 0
	catch (...) { cout << "infinite"; }//end catch
	cout << "x = y / z:" << endl; //output math equation
	//dispalay values
	cout << x;
	cout << " = ";
	cout << y;
	cout << " / ";
	cout << z;

	cout << "\n\nPerforming /, = and << operators overloading with divisor is (0,0).\n"; //output operators used
	cout << "x = y / l:" << endl;
	//chech divisor is not 0
	try {
		x = y / l; //set x to y/l
	}//end try
	// display that quotient is infinite if divisor is 0
	catch (...) { cout << "infinite"; }//end catch
	//display values
	cout << " = ";
	cout << y;
	cout << " / ";
	cout << l;

	cout << "\n\nPerforming /, = and << operators overloading with divisor is (0,0.1).\n";//output operators used
	cout << "x = y / m:" << endl;
	//chech divisor is not 0
	try {
		x = y / m; // set x to y/m
	}//end try
	// display that quotient is infinite if divisor is 0
	catch (...) { cout << "infinite"; }//end catch
	//display values
	cout << x;
	cout << " = ";
	cout << y;
	cout << " / ";
	cout << m;

	cout << "\n\nPerforming != and << operators overloading.\ncheck x!= k\n";//output operators used
	if (x != k) cout << x << " != " << k; //check that values !=

	//output operators used
	cout << "\n\nPerforming =, == and << operators overloading.\nassign k to x by using x = k statement.\n";
	x = k; //set x to k
	cout << "check x == k\n"; //output variables checked
	if (x == k) cout << x << " == " << k; //dispaly variables
	cout << endl;
	system("pause");// pause program
} // end main

