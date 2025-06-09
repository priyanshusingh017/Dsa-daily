#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertionsort(int arr[], int n){

    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){

            if(arr[j]>temp){
                //shift
                arr[j+1]=arr[j];
            }
            else{
                //ruk jao 
                break;
            }
        }
        arr[j+1]=temp;

    }
}

void printarray(int arr[], int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){

    int arr[]={2 , 47 , 32, 1 , 12 , 0};

    int n=sizeof(arr)/sizeof(int);

    insertionsort(arr,n);

    printarray(arr,n);


    return 0;
}
