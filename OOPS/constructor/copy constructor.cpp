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

    // default constructor 
    Hero(){
        cout<<"constructor called "<<endl;
    }

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

    // copy constructor 
    Hero(Hero& temp){ 
        // pass by reference not pass by value .

        cout<<"copy constructor "<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }


    void print()
    {
        cout<< "health : " << this->health<<endl;
        cout<< "level : " << this-> level << endl;
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

int main(){

    Hero Suresh(70 ,'C');
    Suresh.print();

    // in built - copy constructor that copy the parameter 
    Hero ritesh(Suresh);
    ritesh.print();

    /*
    ritesh.health=Suresh.health;
    ritesh.level=Suresh.level;
    */

    return 0;

}