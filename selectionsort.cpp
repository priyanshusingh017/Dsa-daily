#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selectionsort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        int minindex=i;

        for(int j=i+1;j<n;j++){

            if(arr[j]<arr[minindex])
                minindex=j;
            
        }
        swap(arr[i],arr[minindex]);
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

    int n=sizeof(arr)/sizeof(int);

    selectionsort(arr,n);

    printarray(arr,n);


    return 0;
}