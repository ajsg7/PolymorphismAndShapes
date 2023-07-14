#include "AlanSalazarSquare.h"
#include "AlanSalazarRectangle.h"
#include <string>

Square::Square() {/*Empty body*/ }  //Default constructor with no parameter.


Square::Square(double S)
	: Rectangle(NULL, NULL){
	setSide(S);
} //Constructor with a double type parameter as its side. 

/*
Square::Square(double W, double L, double S)
	: Rectangle(W, L) {
	setSide(S);
} */

void Square::setSide(double S) {
	side = S;
} //a function with a double type parameter. 
			   //This function set the side of the square.

double Square::getSide() const {
	return side;
} //a function returns the side of the square with no parameter.

double Square::area() const{
	return getSide() * getSide();
} //Virtual function to override the area() function in 
					//the base class. This function returns the area of a Square.

double Square::perimeter() {
	return 4 * getSide();
}  //A function returns the perimeter with no parameter.


Square Square::operator+(Square& op2) {
	//op2.getSide()
	//return Square{ Square::op2.getSide() + op2.side , imaginary + operand2.imaginary };
	return Square{ (side +op2.side) };
}

