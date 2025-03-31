#include<iostream>
#include<queue>

using namespace std;

int main(){

    //priority queue is a container adapter that gives the functionality of a priority queue
    //it is a data structure that allows fast insertion and deletion at one end of the container
    
    //important note: priority queue is not a sequence container

    //implementing a max heap using priority queue
    priority_queue<int> pq;

    //max heap using priority queue
    priority_queue<int> maxHeap;

    //min heap using priority queue
    priority_queue<int, vector<int>, greater<int>> minHeap;

    maxHeap.push(10);
    maxHeap.push(20);
    maxHeap.push(5);
    maxHeap.push(30);

    //size of max heap
    cout<<"size of max heap "<<maxHeap.size()<<endl;
    int n=maxHeap.size();

    
    //printing all elements of max heap
    cout<<"printing all elements of max heap "<<endl;

    for(int i=0; i<n; i++){
        cout<<maxHeap.top()<<" ";
        maxHeap.pop();
    }cout<<endl;


    minHeap.push(10);
    minHeap.push(20);
    minHeap.push(5);
    minHeap.push(30);


    //size of min heap
    cout<<"size of min heap "<<minHeap.size()<<endl;
    int q=minHeap.size();

    //printing all elements of min heap
    cout<<"printing all elements of min heap "<<endl;
    
    for(int i=0; i<q; i++){
        cout<<minHeap.top()<<" ";
        minHeap.pop();
    }cout<<endl;


    //empty function is used to check if the queue is empty or not
    cout<<"is max heap empty "<<maxHeap.empty()<<endl;
    cout<<"is min heap empty "<<minHeap.empty()<<endl;

    return 0;
}