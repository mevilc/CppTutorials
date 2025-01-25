#include "pimpl.h"

// first create struct that handles implementation details
struct Person::ImplPerson
{
	int age;
	std::string name;
};

Person::Person(int age, std::string name)
{
	// in the constructor, allocate memory for the pointer
	pImplPerson = std::make_unique<ImplPerson>();
	pImplPerson->age = age;
	pImplPerson->name = name;
}

Person::~Person() {};

int Person::getAge() { return pImplPerson->age; }
std::string& Person::getName() { return pImplPerson->name; }
