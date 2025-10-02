#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertionsort(vector<int>&arr , int i ,int n){

    // base case 
    if(i==n) return;

    int j=i;
    while(j>0 && arr[j]<arr[j-1]){
        swap(arr[j] , arr[j-1]);
        j--;
    }

    insertionsort(arr , i+1 , n);

}

int main(){

    vector<int>arr = {9,10,11,8,13,11,4,5,6,1};
    int n= arr.size();

    insertionsort(arr , 1 , n);

    for(auto num : arr){
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}