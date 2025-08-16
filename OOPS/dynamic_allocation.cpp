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

    // dynamic allocation -
    Hero * b = new Hero;
    b->sethealth(79);
    b->setlevel('B');
    // leveel
    cout<<" level is : "<<(*b).getHealth()<<endl;
    cout<<" health is : "<<(*b).getlevel()<<endl;

    // alternate level
    cout<<" level is : "<<(b)->getHealth()<<endl;
    cout<<" health is : "<<(b)->getlevel()<<endl;

    return 0;
}