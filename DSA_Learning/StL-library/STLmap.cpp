#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){

    //map is a container that stores elements in key-value pairs
    //it is a sequence container that allows fast insertion and deletion at any end of the container
    //it is implemented as a balanced binary search tree
    
    //implementing a map
    map<int, string> m;

    //adding elements to the map
    m[1]="hello";
    m[3]="are";
    m[2]="how";
    m[4]="you";
    //sorted by key automatically

    m.insert({13, "hi"});

    //accessing elements of map
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    //size of map
    cout<<"size of map "<<m.size()<<endl;

    //count function is used to check if the element is present in the map or not
    cout<<"finding 13 -> "<<m.count(13)<<endl;
    cout<<"finding -13 -> "<<m.count(-13)<<endl;

    

    //earse function is used to remove elements from the map
    //it takes the key to be removed as an argument

    cout<<"before erasing 13 "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    m.erase(13); //removes the element with key 13 from the map
    cout<<"after erasing 13 "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    //find function is used to find the element in the map
    auto it=m.find(2); 
    cout<<it->first<<" "<<it->second<<endl;


    for(auto i=it; i!=m.end(); i++){
        cout<<i->first<<" "<<i->second<<endl;
    }cout<<endl;

    return 0;
}