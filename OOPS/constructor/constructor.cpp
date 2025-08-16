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

    // default constructor 
    Hero(){
        cout<<"constructor called "<<endl;
    }

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

    // statically called 
    Hero ramesh;

    // dynamically called - 
    Hero *h = new Hero;



    return 0;
}