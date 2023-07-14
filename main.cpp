//Comments: 
// = See commments on your code.
//Grade: 85/100


#include <iostream>
#include "AlanSalazarTwo_Dimensional.h"
//#include "Two_Dimensional.cpp"
#include "AlanSalazarRectangle.h"
//#include "Rectangle.cpp"
#include "AlanSalazarSquare.h"
//#include "Square.cpp"
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	//cout << "Working Fine" << endl;
	
	double a = 0;
	Square s1(2), s2(10), s3;

	Rectangle r1(3, 8), r2(5, 7), r3(0, 0), r4(5, 5);

	Rectangle* recPtr{ &r1 };
	Square* sqrPtr{ &s1 };

	cout << "Area of rectangle 'r1': " << r1.area() << endl;
	cout << "Area of sqaure s1: " << s1.area() << endl;

	s3 = s1 + s2; // s3 = 2 + 10 = 12 

	
	cout << "performing + operator on 2 squares." << endl;
	cout << "Side of s3: " << s3.getSide() << endl;

	//s2.area() = 100		r4.area() = 25
	cout << "Area of square 's2': " << s2.area() << "  By using inheritance: " << r4.area() << endl;

	
	recPtr = &s2;

	cout << "\nWidth of square s1 using inheritance: " << sqrPtr->getSide() << endl;

	cout << "The area of the square with side " << sqrPtr->getSide() << " is " << sqrPtr->area()
		<< " This value is incorrect. "
		<< "It should be " << sqrPtr->getSide() * sqrPtr->getSide() << endl;

	return 0; 
}

//	EVERYTHING WORKS THE WAY IT SHOULD AND THE WAY IT'S SUPPOSED TO! THANK YOU FOR A GREAT SEMESTER OF SHARING
//WISDOM WITH US. I IMPROVED DRAMATICALLY THANKS TO YOU
