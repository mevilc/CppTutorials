#pragma once

#include <string>
#include <memory>

// this is the pimpl (pointer-to-implementation) idiom
// idea: in this .h, a class contains public and private members. Only show public members outside
// hide all private details in a seperate class implemented in the .cpp file.

class Person
{
	public:
		Person(int age, std::string name);	
		~Person();

		int getAge();
		// can return by ref since 'name' always exists in this class
		std::string& getName();
	private:
		// fwd declare this struct holds the internal details
		struct ImplPerson; 
		std::unique_ptr<ImplPerson> pImplPerson;

};
