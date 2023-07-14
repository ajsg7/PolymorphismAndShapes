#include "AlanSalazarTwo_Dimensional.h"

TwoDimensional::TwoDimensional() { /*empty body*/ }

/*
TwoDimensional::TwoDimensional(const double W, const double L, const double R) {
	setWidth(W);
	setLength(L);
}*/

//This constructor should have 3 parameters as shown in the zip file. Do not change the number of parameter as it
//affects the outcome.
//(-5)
TwoDimensional::TwoDimensional(const double W, const double L) { 
	setWidth(W);
	setLength(L);
}

void TwoDimensional::setWidth(const double& W) {
	width = W;
}

void TwoDimensional::setLength(const double& L) {
	length = L;
}

void TwoDimensional::setRadius(const double& R) {
	radius = R;
}

double TwoDimensional::getWidth() const {
	return width;
}

double TwoDimensional::getLength() const {
	return length;
}


double TwoDimensional::getRadius() const {
	return radius;
}

double TwoDimensional::area() const {
	//return getWidth() * getLength() * getRadius(); //Not Necessary for Part C; Square and Rectangle
	return getWidth() * getLength();
}

/* //Assuming  it is not needed for Width and Length part C; Rectangle and Square
double TwoDimensional::surrounding() const {
	return ( 2 * getWidth() ) + ( 2 * getLength() );
} */


