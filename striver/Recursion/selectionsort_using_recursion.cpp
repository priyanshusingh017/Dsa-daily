#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selectionsort(vector<int>&arr , int i , int n){

    // base case -
    if(i==n-1) return ;
    
    int minindex = i;
    for(int j=i+1; j<n; j++){
        if(arr[j]<arr[minindex]){
            minindex = j;
        }
    }
    swap(arr[minindex] , arr[i]);

    selectionsort(arr , i+1 , n);
}

int main(){

    vector<int>arr={8,9,5,11,12,13,1,4,7,6};
    int n = arr.size();

    selectionsort(arr , 0 , n);

    for(auto num : arr){
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}