#include<iostream>
#include<queue>
using namespace std;

int main(){

    //queue is a container adapter that gives the functionality of a queue
    //it is a FIFO (first in first out) data structure
    //it is a sequence container that allows fast insertion and deletion at one end of the container

    //initializing a queue
    queue<string> q;

    //adding elements to the queue
    q.push("hello");
    q.push("how");
    q.push("are");
    q.push("you");


    //size of queue
    cout<<"size of queue "<<q.size()<<endl;
    //size is the number of elements in the queue

    //accessing elements of queue
    cout<<"first element "<<q.front()<<endl;
    cout<<"last element "<<q.back()<<endl;
    //front function is used to access the first element of the queue
    //back function is used to access the last element of the queue

    //accessing elements of queue using pop function
    cout<<"before pop "<<q.size()<<endl;
    q.pop();
    cout<<"first element after pop "<<q.front()<<endl;
    cout<<"after pop "<<q.size()<<endl;

    //printing all elements of queue
    cout<<"printing all elements of queue "<<endl;
    //queue does not allow iteration so we have to use a while loop to print all elements of queue
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    cout<<"size of queue "<<q.size()<<endl;

    return 0;
}
