// abstraction - implementation hiding 

#include <iostream>
using namespace std;

// Abstract class
class Animal {
public:
    virtual void makeSound() = 0; // Pure virtual function
};

// Concrete class
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();

    a1->makeSound();
    a2->makeSound();

    delete a1;
    delete a2;
    return 0;
}