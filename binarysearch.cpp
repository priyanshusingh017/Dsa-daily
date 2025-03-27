#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int binarysearch(int arr[],int s,int e,int key){}

int binarysearch(int arr[],int n ,int key){

    int s=0;
    int e=n-1;

    while(s<=e){

        // int mid = (s+e)/2;
        // if we take (s+e)/2 then it may cause overflow

        int mid = s+(e-s)/2; // this is the correct way to find mid
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            s=mid+1;
            //return binarysearch(arr,mid+1 , e,key);
        }
        else{
            e=mid-1;
            //return binarysearch(arr,s,mid-1,key);
        }
    }
    return -1;
}

int main(){

    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the elements of array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the element to be searched"<<endl;
    int key;
    cin>>key;
    
    // int value = binarysearch(arr,0 , n-1 , key);

    if(binarysearch(arr,n,key)==-1){
        cout<<"element not found"<<endl;
    }
    else{
        cout<<"element found at index "<<binarysearch(arr,n,key)<<endl;
    }
    
    return 0;
}