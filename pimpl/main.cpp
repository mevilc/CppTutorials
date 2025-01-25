#include "pimpl.h"
#include <iostream>

int main()
{
	Person p1(27, "sam");
	Person p2(10, "yikes");

	std::cout << p1.getAge() << "\n";
	std::cout << p2.getName() << "\n";

}
