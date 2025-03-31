#include<iostream>
#include<bits/stdc++.h>
#include<set>

using namespace std;

int main(){

    //set is a container that stores unique elements in a specific order
    //it is a sequence container that allows fast insertion and deletion at any end of the container

    //implementing a set

    set<int> s;

    //adding elements to the set
    s.insert(10);
    s.insert(10);
    s.insert(20);
    s.insert(4);
    s.insert(0);
    s.insert(0);

    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;


    //earse function is used to remove elements from the set
    //it takes the element to be removed as an argument

    set<int>::iterator it=s.begin();
    it++;
    
    s.erase(it); //removes the second element from the set
    cout<<"after erasing 10 "<<endl;
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;


    //count function is used to check if the element is present in the set or not
    cout<<s.count(10)<<endl;

     //find function is used to find the element in the set
     set<int>::iterator it1=s.find(20);
     //cout<<*it1<<endl; 

     for(auto it=it1; it!=s.end(); it++){
         cout<<*it<<" ";

        }cout<<endl;
     

   











    return 0;
}