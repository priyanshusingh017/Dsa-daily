#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubblesort(vector<int>&arr){
    int n = arr.size();
    for(int i=0; i<n-1; i++){
        for(int j = i+1 ; j<n; j++){
            if(arr[i]>arr[j]){
                swap(arr[i] , arr[j]);
            }
        }
    }
}

void printarray(vector<int>&arr){
    int n = arr.size();
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
}

int main(){

    vector<int>arr = {8,2,4,1,6,3,7};

    int n = arr.size();
    bubblesort(arr);
    printarray(arr);

    return 0;
}