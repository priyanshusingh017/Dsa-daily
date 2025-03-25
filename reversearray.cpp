#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start =0;
    int end=n-1;
    
    while(start<=end){
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
    }
}

void printarray(int arr[], int n){
    cout<<"printing the array";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[6]={1,4,0,5,-2,15};
    int brr[5]={2,6,3,9,4};

    reverse(arr,6);
    reverse(arr,5);

    printarray(arr,6);
    printarray(brr,5);

    return 0;
}