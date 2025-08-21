/*
Inheritance is one of the four pillars of Object-Oriented Programming (OOP).
It allows a class (derived/child class) to inherit properties and behaviors (data members and member functions) from another class (base/parent class).


Benefits:
- Code reusability
- Extensibility
- Maintainability
*/

/*
Access Modifiers in Inheritance:

| Inheritance Type   | Base Class Public Members | Base Class Protected Members | Base Class Private Members |
|--------------------|---------------------------|------------------------------|---------------------------|
| public             | public                    | protected                    | not accessible            |
| protected          | protected                 | protected                    | not accessible            |
| private            | private                   | private                      | not accessible            |

Syntax:
class Derived : access_modifier Base { ... };
*/


#include<iostream>
using namespace std;

// Base class
class Human {
public:
    int height;
    int weight;
    int age;

    int getAge() {
        return age;
    }

    void setWeight(int w) {
        weight = w;
    }
};

// Derived class inheriting from Human
class Male : public Human {
public:
    string color;

    void sleep() {
        cout << "Male sleeping" << endl;
    }
};

int main() {
    Male obj1;
    obj1.height = 180;
    obj1.age = 25;
    obj1.setWeight(75);
    obj1.color = "Brown";

    cout << "Age: " << obj1.getAge() << endl;
    cout << "Weight: " << obj1.weight << endl;
    cout << "Height: " << obj1.height << endl;
    cout << "Color: " << obj1.color << endl;
    obj1.sleep();

    return 0;
}