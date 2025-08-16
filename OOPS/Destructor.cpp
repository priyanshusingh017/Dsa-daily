#include <iostream>
#include <cstring>
// #include "Hero.cpp" -> alternate way to create or import
using namespace std;

class Hero
{

    // properties
    public:
    char *name;
    int health;
    char level;
    static int  time_to_complete;


    // default constructor 
    Hero(){
        cout<<"constructor called "<<endl;
        name =  new char[100];
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

        char *ch = new  char[strlen(temp.name)+1];
        strcpy(ch , temp.name);
        this->name = ch;
        cout<<"copy constructor "<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }


    void print()
    {
        cout<< "[ name : " << this->name<<" ,";
        cout<< "health : " << this->health<<" , ";
        cout<< "level : " << this-> level <<"]";
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

    void setname (char name[]){
        strcpy(this->name , name);
    }

    static int random(){
        return time_to_complete;
    }


    // Destructor 
    ~Hero(){
        cout<<"Destructor called "<<endl;
    }

    // static created object called the destructor automatically , 
    //  where the dynamic created one need to called manually .
};


int Hero::time_to_complete = 5;

/*
~Hero() {
    cout << "Destructor called" << endl;
    delete[] name;
}
*/

// const keyword - object creation , functions , initalisation list - hw

int main(){

    // satitc 
    Hero a;

    // dynamic 
    Hero *b = new Hero();
    delete b;

    cout<<Hero::time_to_complete <<endl ;

    return 0;

}