#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void update(int **p){
    
    //  p = p + 1; 
    // kuch hoga kya ?? -> no 

    // *p = *p + 1;
    // kuch hoga kya ?? -> yes , it will increment the address stored in pointer ptr by size of int

    **p = **p + 1;
    // kuch hoga kya ?? -> yes , it will increment the value at address of i by 1
}


int main(){

    /*
    int i=5;
    int *ptr = &i;
    int **ptr1 = &ptr; 
    // pointer to pointer -> double pointer ;
    // pointer to pointer is used to store address of pointer variable
    // ptr1 is a pointer to pointer which stores address of ptr
    // ptr is a pointer which stores address of i

// -> prints value of i and address of i , same with ptr and ptr1    
/*
    // prints value of i 
    cout<<"value of i is: "<<i<<endl; 
    // prints address of i
    cout<<"address of i is: "<<&i<<endl;
    // prints address of i 
    cout<<"value of ptr is: "<<ptr<<endl; 
    // prints value at address of i
    cout<<"value at ptr is: "<<*ptr<<endl; 
    // prints address of ptr
    cout<<"address of ptr is: "<<&ptr<<endl;
    // prints address of ptr
    cout<<"value of ptr1 is: "<<ptr1<<endl; 
    // prints address of i
    cout<<"value at ptr1 is: "<<*ptr1<<endl; 
    // prints value at address of i
    cout<<"value at address of ptr1 is: "<<**ptr1<<endl; 

    // & -> address of operator . * -> dereference operator ( value at address of operator )

    /*

    cout<<"before update i: "<<i<<endl; 
    cout<<"before update ptr: "<<ptr<<endl;
    cout<<"before update ptr1: "<<ptr1<<endl;
    update(ptr1); 
    cout<<"after update  i: "<<i<<endl;
    cout<<"after update  ptr: "<<ptr<<endl;
    cout<<"after update  ptr1: "<<ptr1<<endl;

    */






    return 0;
}