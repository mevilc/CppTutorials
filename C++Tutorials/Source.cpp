 // abstract classes, pure virtual functions

#include <iostream>

using namespace std;

// abstract class : >= 1 pure virtual functions
struct Shape 
{
	// pure virtual function
	virtual double area() = 0;
};

struct Square : Shape
{
	double side_;

	Square(double side) : side_(side) {}

	// override virtual function
	// if not, Square becomes abstract class too!
	double area() override { return side_ * side_; }
};

struct Triangle : Shape
{
	double base_, height_;

	Triangle(double base, double height) : 
		base_(base), height_(height)  {}

	// override virtual function
	double area() override { return 0.5 * base_ * height_; }
};

int main()
{
	// Square, triangle inherit from Shape class
	// polymorophic code, otherwise need a seperate Square, triangle 
	// base class
	Shape* shapes[] = { new Square(5), new Triangle(5, 10) };
	
	// Goal: calculate area of each shape
	// But, a generic area() method does not exist
	// each shape has its own area implementation

	// Solution: Shape base class with area() defined, not implemented
	//			 each inherited class has own area() implementation
	//			 overriden.

	for (auto& shape : shapes)
		// which area() to call will be determined by dynamic binding
		cout << "area: " << shape->area() << "\n";

	// Cant create an abstract class object, but cam have pointers to it!
	// Shape s;
	   
	return 0;
}