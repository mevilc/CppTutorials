// pass by ref, by pointer, by value
// return by ref, by pointer, by value

#include <iostream>
#include <string>

struct Person
{
    int age = 0;
    double salary = 0;
    std::string name_;
    // return by ref in class/struct, guaranteed to have a ref
    const std::string& name() { return name_; }
};

void f(Person p) { p.age = 3; }
void g(Person& p) { p.age = 5; }
void h(Person* p) { p->age = 5; }

int i(Person& p) { return p.age; }
int* j(Person& p) { return &p.age; }
int& k(Person& p) { return p.age; }

int main()
{
    Person p1, p2, p3;
    
    f(p1);  // pass by value, creates a local copy on function call stack
    g(p2);  // pass by ref, passes pointer to arg, no copy created
    h(&p3); // pass by pointer, passes pointer to arg, no copy created

    int i_ = i(p1); // returns a copy
    // DONT! 
    int* j_ = j(p1); // returns a pointer to return value in function call stack
    int& k_ = k(p1); // returns a reference to return value in function call stack

    std::cout << "i(): " << i_ << "\n";
    std::cout << "j(): " << j_ << "\n";
    std::cout << "i(): " << k_ << "\n";

    Person p4;
    std::cout << p4.name() << "\n";
    return 0;
}