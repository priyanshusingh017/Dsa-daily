#include<iostream>
#include<bits/stdc++.h>
#include<deque>

using namespace std;

int main(){

    deque<int> d;
    //deque is a double ended queue which allows insertion and deletion at both ends
    //it is a sequence container that allows fast insertion and deletion at both ends
    
    //adding elements to the deque
    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    d.push_front(4);

    //size of deque
    cout<<"size of deque "<<d.size()<<endl;

    //printing all elements of deque
    cout<<"printing all elements of deque "<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    //accessing elements of deque
    cout<<"print first index element "<<d.at(1)<<endl;
    cout<<"print first element "<<d.front()<<endl;
    cout<<"print last element "<<d.back()<<endl;

    //empty function is used to check whether the deque is empty or not
    cout<<"deque is empty or not "<<d.empty()<<endl;

    //erasing elements from deque
    cout<<"before earse "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    //erase function is used to remove elements from the deque
    cout<<"after earse "<<d.size()<<endl;

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.pop_front();
    d.pop_back();
    d.push_back(5);
    //printing all elements of deque after pop_back and pop_front
    cout<<"printing all elements of deque "<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;



    return 0;
}