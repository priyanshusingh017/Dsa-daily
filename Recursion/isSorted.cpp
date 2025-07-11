#include<iostream>
using namespace std;

bool isSorted(int*arr , int size){

    if(size==0 || size==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
       return  isSorted(arr+1 , size-1);
    }
}

int getsum(int * arr , int size){

    if(size==0) return 0;
    if(size==1) return arr[0];

    return arr[0] + getsum(arr+1 , size-1);
}

// hw  -> input arr= {3,2,5,1,6} and output its sum =17;

int main(){

    int arr[5]={3,4,5,1,2}; // 0
    int size=5;

    cout<<isSorted(arr,size)<<endl;

    int arr1[5] = {3,2,5,1,6}; // 17
    cout<<getsum(arr1 , 5)<<endl;

    return 0;
}