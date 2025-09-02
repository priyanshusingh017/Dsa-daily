#include<iostream>
#include<bits/stdc++.h>

#include<array>

using namespace std;
int main(){

    int basic[3]={1,2,3};

    array<int,4> arr={1,2,3,4};

    //size of array
    int size=arr.size();
    cout<<"size of the array "<<size<<endl;

    //traversing an array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //element access
    cout<<"element at 2nd index "<<arr.at(2)<<endl; 
    //at function is used to access the element at a particular index

    cout<<"element empty or not "<<arr.empty()<<endl;
    //empty function is used to check whether the array is empty or not
    //it returns 1 if empty and 0 if not empty.

    //access first and last element
    cout<<"first element "<<arr.front()<<endl;
    cout<<"last element "<<arr.back()<<endl;

    

    return 0;
}