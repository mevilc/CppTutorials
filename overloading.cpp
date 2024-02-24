// operator overloading

#include <iostream>

struct vf2d
{
	float x, y;
};

int main()
{
	vf2d v1 = { 1.0f, 2.0f };
	vf2d v2 = { 1.0f, 3.0f };
	vf2d v3 = { 1.0f, 4.0f };
	
	// *** multiplying vectors component-wise ***
	v1.x = v2.x + v3.x;
	v1.y = v2.y + v3.y;
	// or
	v1 = { v2.x + v3.x, v2.y + v3.y };



	return 0;
}