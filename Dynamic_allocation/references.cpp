#include<iostream>
using namespace std;

void update (int n){
    n++;
}

void update1 (int& n){
    n++;
}

int main(){

    /*
    int i=5;
    int & j =i; // create a ref variable 
    cout<<i<<endl;
    i++;
    cout<<j<<endl;
    
    //why ? -> 
    References in C++ are used to create an alias for another variable. They are especially useful for:

    Function Arguments: Passing large objects by reference avoids copying, improving performance.
    Modifying Arguments: Functions can modify the original variable if passed by reference.
    Return Values: Returning by reference avoids unnecessary copying and allows direct modification.
    */

    int n = 5; 
    cout<<"before "<<n<<endl;

    update(5); 
    // refrence variable show or address same the memmory address of the variable memory address.

    cout<<"after "<<n<<endl;

    // pass by value -> copy create with another memory 
    // pass by refernce -> same memory with different memory 


    return 0;
}