/*
Types of Inheritance in C++:
1. Single Inheritance: One base class, one derived class.
2. Multiple Inheritance: One derived class inherits from more than one base class.
3. Multilevel Inheritance: A derived class becomes a base class for another derived class.
4. Hierarchical Inheritance: Multiple derived classes inherit from a single base class.
5. Hybrid Inheritance: Combination of two or more types of inheritance.
*/

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    int age;
    int weight;

    void bark() {
        cout << "Barking" << endl;
    }
};

// Single Inheritance
class Dog : public Animal {
};

// Multilevel Inheritance
class GermanShepherd : public Dog {
};

// Another base class
class Human {
public:
    string color;

    void speak() {
        cout << "Speaking" << endl;
    }
};

// Multiple Inheritance
class Hybrid : public Animal, public Human {
};

// Hierarchical Inheritance
class A {
public:
    void func1() {
        cout << "Inside function 1" << endl;
    }
};

class B : public A {
public:
    void func2() {
        cout << "Inside function 2" << endl;
    }
};

class C : public A {
public:
    void func3() {
        cout << "Inside function 3" << endl;
    }
};

// Hybrid Inheritance Example:
// Here, class D inherits from both B (which inherits from A) and C (which also inherits from A).
// This combines multiple and multilevel inheritance.

class D : public B, public C {
public:
    void func4() {
        cout << "Inside function 4 (Hybrid Inheritance)" << endl;
    }
};

// Inheritance Ambiguity
// When a derived class inherits from two classes that have a common base, ambiguity arises.
// For example, class D inherits func1() from both B and C (both inherit from A).
// To resolve ambiguity, scope resolution is used.

void inheritanceAmbiguityExample() {
    D obj;
    // obj.func1(); // Error: ambiguous, as func1() is inherited twice via B and C

    // To resolve ambiguity, use scope resolution:
    obj.B::func1(); // Calls func1() from B's A
    obj.C::func1(); // Calls func1() from C's A
}


int main() {
    Dog d;
    d.bark();
    cout << d.age << endl;

    GermanShepherd g;
    g.bark();

    Hybrid h1;
    h1.bark();
    h1.speak();

    A obj1;
    obj1.func1();

    B obj2;
    obj2.func1();
    obj2.func2();

    C obj3;
    obj3.func1();
    obj3.func3();

    D obj4;
    obj4.func2();
    obj4.func3();
    obj4.func4();

    inheritanceAmbiguityExample();

    return 0;
}
