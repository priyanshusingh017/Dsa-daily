#include <iostream>
// #include "Hero.cpp" -> alternate way to create or import
using namespace std;

class Hero
{

    // properties
    char name[100];

    private:
    int health;

    public:
    char level;

    /*
     ** THIS KEYWORD - 
     The this keyword in C++ is a pointer that refers to the current object instance of a class. 
     It is commonly used inside class methods and constructors to distinguish between member variables and parameters with the same name.
     this->health = health; inside the constructor assigns the value of the parameter health to the member variable health of the current object. 
     Without this->, the assignment would be ambiguous because both the parameter and the member variable are named health.
     
     Example analogy:
     Think of this as saying "my own"—so this->health means "my own health variable," not the one passed in as a parameter.
    */

    // parameterised constructor -
    Hero(int health)
    {
        // this is pointer to the current object 
        cout<< "this " << this << endl;
        this->health = health;
    }

    // this->health - means refer to the object's proprties health 
    Hero(int health , char level)
    {
        // this is pointer to the current object 
        this->health = health;
        this->level =  level;
    }

    // default constructor 
    Hero(){
        cout<<"constructor called "<<endl;
    }

    void print()
    {
        cout << level << endl;
    }

    // getter
    int getHealth()
    {
        return health;
    }

    char getlevel()
    {
        return level;
    }

    // setter
    void sethealth(int h)
    {
        health = h;
    }

    void setlevel(char ch)
    {
        level = ch;
    }
};

int main()
{

    // when we create any type of constructor then system default constructor automatically deleted. 

    // object created statically 
    Hero ramesh(10);
    // for address - use  ( &object )
    cout<<"adress of ramesh " << &ramesh << endl;
    ramesh.getHealth();
    ramesh.print(); // level  - garbage value 

    // dynamic way 
    Hero *h = new Hero(10);
    ramesh.print(); // level  - garbage value 

    Hero temp(22 , 'B');
    temp.print(); // level  - B

    return 0;
}