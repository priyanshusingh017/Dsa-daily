#include<iostream>
// #include "Hero.cpp" -> alternate way to create or import 
using namespace std;

class Hero{

    // properties 
    char name[100];
    private:
    int health;
    public:
    char level;

    // padding , greedy eliminate -  hw 

    void print(){
        cout<<level<<endl;
    }

    //getter 
    int getHealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    // setter 
    void sethealth(int h){
        health=h;
    }

    void setlevel(char ch){
        level = ch;
    }

};

int main(){

    // creation of object -

    Hero Ramesh; // static allocation
    cout<<"size : "<< sizeof(Ramesh)<<endl; // 108 -> 100 + 4 + 4 ;

    // in the empty class 1 bit of memory class
    // reversed for indentification or to keep the track

    // to access the properties using dot(.) operator - object.properties(); 

    // Ramesh.health=70;
    Ramesh.level='B';

    // cout<<"health is : "<<Ramesh.health<<endl; -> if all things is in public the return 70 
    
    cout<<"level is : "<<Ramesh.level<<endl;

    // acess modifiers ->
    // public , private , protected 
    /*
    // public: Accessible from anywhere
    // private: Accessible only within the class
    // protected: Accessible within the class and derived classes
    */


    /*
    // Using getter and setter
    // Setter for name
    strcpy(Ramesh.name, "Ramesh");

    // Getter for name
    cout << "Name is : " << Ramesh.name << endl;
    */

    // if the member is in private the using - 
    // getter ( simply fetch)  and setter (condition checking ) 

    Ramesh.sethealth(70);
    cout<<"Ramesh health is : "<< Ramesh.getHealth()<<endl;

    Ramesh.print(); // cout the level - B ;








    return 0;
}