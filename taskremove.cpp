#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void taskremover(vector<int>arr , int pos){
    if(pos<1 || pos > arr.size()){
        cout<<"Position is out of the range ";
        return ;
    }

    arr.erase(arr.begin()+ (pos-1));

    for(int i=0 ; i<arr.size(); i++){
        if(i>0) cout<<" ";
        cout<<arr[i];
    }
    cout<<endl;
}


int main(){

    // 5 -> no. of testscase 
    // 101 102 103 104 105  -> array in 1 index format .
    // 2 -> position to remove 

    int n;
    cin>>n;

    if(n==0){
        cin.ignore();
        cout<<"List is empty";
        return 0;
    }

    vector<int>tasks(n);
    for(int i=0; i<n; i++){
        cin>>tasks[i];
    }

    int pos;
    cin>>pos;

    taskremover(tasks , pos);

    return 0;
}