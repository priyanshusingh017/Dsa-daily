#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertionsort(vector<int>&arr){

    int n = arr.size();

    for(int i=1; i<n; i++){
        int j=i;

        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1] , arr[j]);
            j--;
        }
    }
}

void printarray(vector<int>&arr){
    int n = arr.size();
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
}

int main(){

    vector<int>arr = {8,2,4,1,6,3,7};

    int n = arr.size();
    insertionsort(arr);
    printarray(arr);

    return 0;
}