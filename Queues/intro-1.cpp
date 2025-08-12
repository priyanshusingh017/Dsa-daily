#include<iostream>
#include<queue>
using namespace std;

int main(){

    //create a queue
    queue<int>q;

    //push the element 
    q.push(11);
    cout<<"front of the queue is "<<q.front()<<endl;
    q.push(15);
    cout<<"front of the queue is "<<q.front()<<endl;
    q.push(13);
    //size of the queue
    cout<<"size of the queue "<<q.size()<<endl;
    //is empty 
    cout<< "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;

    // pop elements and show state
    cout << "\nPopping elements..." << endl;
    while (!q.empty()) {
        cout << "Front: " << q.front() << ", Size: " << q.size() << endl;
        q.pop();
    }
    cout << "Queue is now empty: " << (q.empty() ? "Yes" : "No") << endl;

    return 0;
}