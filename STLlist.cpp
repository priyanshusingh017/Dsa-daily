#include<iostream>
#include<bits/stdc++.h>
#include<list>
using namespace std;

int main(){

    //list is a sequence container that allows non-contiguous memory allocation
    //it is a doubly linked list which allows insertion and deletion at any position in the list


    list<int> l1(5,100);
    //list of size 5 with all elements initialized to 100
    cout<<"printing all elements of list "<<endl;
    for(int i:l1){
        cout<<i<<" ";
    }
    cout<<endl;

    
    
    list<int> l;
    //list of size 0
    cout<<"size of list "<<l.size()<<endl;
    
    //adding elements to the list
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);

    //traversing a list
    cout<<"printing all elements of list "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    //earse function is used to remove elements from the list
    cout<<"before earse "<<l.size()<<endl;
    l.erase(l.begin());
    cout<<"after earse "<<l.size()<<endl;

    //printing all elements of list after earse

    cout<<"printing all elements of list "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"size of list "<<l.size()<<endl;




    return 0;
}

    