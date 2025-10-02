#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubblesort(vector<int>&arr , int n){

    // base case -
    if(n==0 || n==1) return;

    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i] , arr[i+1]);
        }
    }

    bubblesort(arr , n-1);
}

int main(){

    vector<int>arr = {9,10,11,8,13,11,4,5,6,1};
    int n= arr.size();

    bubblesort(arr , n);

    for(auto num : arr){
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}