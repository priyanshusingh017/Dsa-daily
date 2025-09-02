#include <iostream>
#include <stack>
using namespace std;

int main(){

    //creation of stack
    stack<int>s;

    //push operation
    s.push(2);
    s.push(3);

    //pop operation
    s.pop();

    //top element 
    cout<<"Printing top element : "<<s.top()<<endl;

    //empty function
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    //size of stack 
    cout<<"Size of stack is : "<<s.size()<<endl;

    return 0;
}