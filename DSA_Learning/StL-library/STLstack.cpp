#include<iostream>
#include<stack>
using namespace std;

int main(){

    //stack is a container adapter that gives the functionality of a stack
    //it is a LIFO (last in first out) data structure
    //it is a sequence container that allows fast insertion and deletion at one end of the container

    //initializing a stack
    stack<int> s;
    
    //adding elements to the stack
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    

    //size of stack
    cout<<"size of stack "<<s.size()<<endl;


    //top function is used to access the top element of the stack
    cout<<"top element of stack "<<s.top()<<endl;
    //top element is the last element that was added to the stack
    //it is the first element to be removed from the stack


    //empty function is used to check whether the stack is empty or not
    cout<<"stack is empty or not "<<s.empty()<<endl;
    //it returns 1 if empty and 0 if not empty.

    //pop function is used to remove the top element of the stack
    cout<<"before pop "<<s.size()<<endl;
    s.pop();
    cout<<"after pop "<<s.size()<<endl;


    //printing all elements of stack
    cout<<"printing all elements of stack "<<endl;
    //stack does not allow iteration so we have to use a while loop to print all elements of stack
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;


    return 0;
}