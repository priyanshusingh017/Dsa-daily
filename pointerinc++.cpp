#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // pointer inlization -> 
    int a = 10;
    cout<<"value of a is: "<<a<<endl;
    //address of a operator -> &variable
    cout<<"address of a is: "<<&a<<endl;
    // pointer variable -> int *p = &a; decleration of pointer variable
    int *ptr = &a;
    cout<<"value of pointer ptr is: "<<ptr<<endl; // print address of a ;
    cout<<"value at pointer ptr is: "<<*ptr<<endl; // print the value at address of a;

    int b = 20.02;
    int *ptr1 = &b;
    // * -> dereference operator *ptr -> value at address of a;
    // means in ptr we have address of a and we are dereferencing it to get the value at that address.
    
    // size of pointer
    cout<<"size of pointer ptr is: "<<sizeof(ptr)<<endl; 
    cout<<"size of *ptr is : "<<sizeof(*ptr)<<endl; 
    cout<< "size of pointer ptr1 is: "<<sizeof(ptr1)<<endl;
    

    int i=5;
    int *p=0;
    cout<<"value of i is: "<<i<<endl;
    p= &i; // pointer p is initialized with address of i
    cout<<"address of i is: "<<p<<endl; // print address of i
    cout<<"value at address of i is: "<<*p<<endl; // print value at address of i
    *p = 10; // change value at address of i to 10
    cout<<"value of i after changing value at address of i is: "<<i<<endl; 
    // print value of i after changing value at address of i

    int *p1 = &i; 
    (*p1)++; 
    cout<<"value of i is: "<<i<<endl; 

    //copying pointer -> 
    int *p2 = p1; 
    cout<<"value at address of p2 is: "<<*p2<<endl; 

    // incrementing pointer -> address of p2 will be incremented by size of int
    cout<<"value of p2 before incrementing is: "<<*p2<<endl;
    p2++;
    cout<<"value of p2 after incrementing is: "<<*p2<<endl; 
    


    return 0;
}