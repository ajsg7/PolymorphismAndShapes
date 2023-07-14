#include "AlanSalazarRectangle.h"
#include "AlanSalazarTwo_Dimensional.h"
#include <string>

Rectangle::Rectangle() {}  //Default constructor with no parameter.

Rectangle::Rectangle(const double W, const double L) 
	: TwoDimensional(W, L){
	setWidth(W);
	setLength(L);
} //Constructor with 2 constant double type parameters as width and length.

void Rectangle::setWidth(const double& W) {
	width = W;
} //a function with a reference double type parameter. This function set
				//the width of the rectangle.

void Rectangle::setLength(const double& L) {
	length = L;
} //a function with a reference double type parameter. This function set
				 //the length of the rectangle.

double Rectangle::getWidth() const {
	return width;
} //a function returns the width of the rectangle with no parameter.

double Rectangle::getLength() const {
	return length;
}//a function returns the length of the rectangle with no parameter.

//This function should be VIRTUAL.
double Rectangle::area() const {
	return getWidth() * getLength();
}//Virtual function to override the area() function 
					//in the base class. This function return the area of the rectangle.

double Rectangle::perimeter()const {
	return (2 * getWidth()) + (2 * getLength());
} //A function returns the perimeter with no parameter.
