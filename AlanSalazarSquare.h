#pragma once
//class Square: public Rectangle{
//};
// Square.h
//

//Note: Include the appropriate header definition and header files.
#include "AlanSalazarRectangle.h"

//Class Square is an inheritance of the class Rectangle.
//Make the appropriate modification for the class declaration.

class Square : public Rectangle{
public:
	Square();  //Default constructor with no parameter.

	Square(double); //Constructor with a double type parameter as its side.
	//Square(double, double, double);
	void setSide(double); //a function with a double type parameter. 
				   //This function set the side of the square.

	double getSide() const; //a function returns the side of the square with no parameter.

	//This function should be VIRTUAL.
	//(-5)
	double area() const override; //Virtual function to override the area() function in 
						//the base class. This function returns the area of a Square.

	double perimeter();  //A function returns the perimeter with no parameter.

	Square operator+(Square&); //Override + operator with a parameter as a 
							  //reference of the class Square. This operator
							  //add the sides of 2 squares. TWO DIFFERENT SQUARE THAT IS!
							  //The result should be a new square with the side
							  // as the sum of 2 sides of 2 squares.

private:
	double side;
};


