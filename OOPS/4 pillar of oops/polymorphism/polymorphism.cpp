/*
Polymorphism means that many forms 
It allows objects of different classes to be treated as objects of a common superclass. 
The main benefit is that it enables a single interface to represent different underlying forms (data types).

There are two types of polymorphism in C++:
1. **Compile-time polymorphism** (also known as static polymorphism): Achieved using function overloading and operator overloading.
2. **Run-time polymorphism** (also known as dynamic polymorphism): Achieved using inheritance and virtual functions.

Polymorphism helps in writing flexible and reusable code. For example, you can call the same function on different objects, and each object can respond in its own way.
*/

#include<iostream>
using namespace std;

// function overload
class A {
    
    public:
    void sayhello(){
        cout<<"hello everyone"<<endl;
    }
    // function with same name but with different arugument of different type of arugment
    int sayhello (string name , int n){
        cout<<"hello "<<endl;
        return n;
    }

    void sayhello(string name){
        cout<<"say hello "<<name<<endl;
    }
};

// operator operator 

class B {

    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"output "<< value2 - value1 <<endl;
    }

    void operator() (){
        cout<<"mai bracket hu "<<this->a<<endl;
    }

};

class Animal{

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog : public Animal{
    public:
    // runtime ploymerphism - 
    void speak(){
        cout<<"braking"<<endl;
    }
};

int main(){

    A obj;
    obj.sayhello();

    B obj1 , obj2;
    obj1.a = 4;
    obj2.a =7;

    obj1+obj2;

    obj1();  

    Dog d;
    d.speak();


    return 0;
}