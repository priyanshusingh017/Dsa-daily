#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){

    vector<int> v;

    //vector is a dynamic array which can grow and shrink in size
    //it is a sequence container that encapsulates dynamic size arrays

    vector<int> v1(5,1);
    for(int i:v1){
        cout<<i<<" ";
    }
    cout<<endl;

    //size of vector
    cout<<"size of vector "<<v.size()<<endl;
    //capacity of vector
    //capacity is the size of the array that is allocated to the vector and amount of space that is reserved for the vector

    //capacity is always greater than or equal to size of vector
    //size is the number of elements in the vector
    cout<<"capacity of vector "<<v.capacity()<<endl;


    //adding elements to the vector
    v.push_back(1);
    cout<<"capacity of vector "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity of vector "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity of vector "<<v.capacity()<<endl;

    cout<<"size of vector "<<v.size()<<endl;


    //accessing elements of vector
    //cout<<"first element "<<v.at(0)<<endl;
    cout<<"first element "<<v.front()<<endl;
    cout<<"last element "<<v.back()<<endl;

    cout<<"second element "<<v.at(1)<<endl;

    //printing all elements of vector
    cout<<"printing all elements of vector "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //pop_back function is used to remove the last element of the vector
    cout<<"before pop_back "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"after pop_back "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    //clear function is used to clear the vector
    cout<<"before clear "<<v.size()<<endl;

    v.clear();

    cout<<"after clear "<<v.size()<< endl;
    cout<<"capacity of vector "<<v.capacity()<<endl;



    return 0;
}