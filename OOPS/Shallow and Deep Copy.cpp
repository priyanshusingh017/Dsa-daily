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

    public:
    char level;

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
};

// default copy constructor is a shallow copy

int main(){

    Hero hero1;
    hero1.sethealth(12);
    hero1.setlevel('D');
    char name[7] = "Babber";
    hero1.setname(name);

    // hero1.print();
    cout<<endl;

    // use default copy constructor 

    Hero hero2(hero1);
    // hero1.print();
    // Hero hero2 = hero1;

    hero1.name[0] = 'g';
    hero1.print();
    cout<<endl;
    hero2.print();

    // shallow copy me kya kar rahe ho ki same merory ko access kar rahe likin do alg naam se .

    // deep copy wale case apn ne dusra hi array bana liya with diffrent memory address.


    // ** copy assignment operator 

    hero1 = hero2 ;

    cout<<endl;
    hero1.print();
    cout<<endl;
    hero2.print();



    return 0;
}