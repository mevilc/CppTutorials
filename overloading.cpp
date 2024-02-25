// operator overloading

#include <iostream>

using namespace std;

struct vf2d
{
	float x, y;

    vf2d() : x(0.f), y(0.f) {} // default
    vf2d(float _x , float _y ) : x(_x), y(_y) {}
    vf2d(const vf2d& v) : x(v.x), y(v.y) {}

    // addition operator
    // left       +        right
    vf2d operator + (const vf2d& rhs)
    {
        // this = pointer to current instance
        // creates a copy
        return vf2d(this->x + rhs.x, this->y + rhs.y);
    }

    vf2d operator * (const float& rhs)
    {
        // this = pointer to current instance
        return vf2d(this->x + rhs, this->y + rhs);
    } 

    vf2d& operator += (const vf2d& rhs)
    {
        // modifies left object, does not return copy
        this->x += rhs.x;
        this->y += rhs.y;
        return *this;
    }
};

int main()
{
	vf2d v1 = { 1.0f, 2.0f };
	vf2d v2 = { 1.0f, 3.0f };
	vf2d v3 = { 1.0f, 4.0f };
	
	// *** adding vectors component-wise ***
	v1.x = v2.x + v3.x;
	v1.y = v2.y + v3.y;
	// or
	v1 = { v2.x + v3.x, v2.y + v3.y };

    // *** adding by overloading
    vf2d v4 = v2 + v3;
    vf2d v5 = v2 * 5; // 5 * v2 does not work!

    cout << "v4: " << v4.x << ", " << v4.y << "\n"; 
    cout << "v5: " << v5.x << ", " << v5.y << "\n"; 

    v5 += v4;

	return 0; 
}