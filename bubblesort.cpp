#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n){

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

void printarray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[]={2 , 47 , 32, 1 , 12 , 0};

    int a=sizeof(arr)/sizeof(int);

    bubblesort(arr,a);

    printarray(arr,a);


    return 0;
}