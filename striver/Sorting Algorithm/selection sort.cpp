#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selectionsort(vector<int>&arr , int n){

    for(int i=0; i<n-1; i++){
        int minindex = i;
        for(int j =i+1; j<n; j++){
            if(arr[j]<arr[minindex]){
                minindex = j;
            }
        }
        swap(arr[i] , arr[minindex]);
    }
}

void printarray(vector<int>&arr , int n){
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
}

int main(){

    vector<int>arr = {8,2,4,1,6,3,7};

    int n = arr.size();
    selectionsort(arr , n);
    printarray(arr , n);

    return 0;
}