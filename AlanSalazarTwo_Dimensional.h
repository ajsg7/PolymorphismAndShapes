#pragma once //FINAL PART C
//SAVE OVERLAODING THE OPERATORS TILL THE END
#ifndef TWO_DIMENSIONAL_H
#define TWO_DIMENSIONAL_H

#include <iostream>
#include <string>

class TwoDimensional{
public:
	TwoDimensional();

	//explicit TwoDimensional(const double, const double, const double);
	explicit TwoDimensional(const double, const double); //ONLY TWO PARAMETERS NEEDED FOR PART C. Width and Length

	void setWidth(const double&);

	void setLength(const double&);

	void setRadius(const double&);

	double getWidth() const;

	double getLength() const;

	double getRadius() const;

	virtual double area() const;

	//Assuming it is Not needed for Part C
//	virtual double surrounding() const;


private:
	double width, length, radius;
	
};

#endif 

