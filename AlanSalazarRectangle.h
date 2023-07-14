#pragma once
//Rectangle.h file

#include "AlanSalazarTwo_Dimensional.h"
#include <iostream>


//Note: Include the appropriate header definition and header files.


//Class Rectangle is an inheritance of the class TwoDimensional.
//Make the appropriate modification for the class declaration.

//class Rectangle: public Two_Dimensional{
class Rectangle : public TwoDimensional {

public:
	Rectangle();  //Default constructor with no parameter.

	//Do not change the number of parameter of this cnstructor as it would affect the outcomes.
	//
	explicit Rectangle(const double, const double); //Constructor with 2 constant double type parameters as width and length.

	void setWidth(const double&); //a function with a reference double type parameter. This function set
					//the width of the rectangle.
					
	void setLength(const double&); //a function with a reference double type parameter. This function set
					 //the length of the rectangle.

	double getWidth() const; //a function returns the width of the rectangle with no parameter.

	double getLength() const; //a function returns the length of the rectangle with no parameter.

	//This function should be VIRTUAL as mentioned to the right.
	//(-5)
	double area() const override; //Virtual function to override the area() function 
						//in the base class. This function return the area of the rectangle.

	double perimeter()const; //A function returns the perimeter with no parameter.


private:
	double width, length;
};



