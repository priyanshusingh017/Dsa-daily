#include<iostream>
using namespace std;

bool binary_search(int arr[] , int start , int end , int key){

    //base case 
    if(start>end){
        return false;
    }

    int mid = start + (end-start)/2;

    if (arr[mid]==key){
        return true;
    }

    if(arr[mid] < key){
        return binary_search(arr , mid+1 , end , key);
    }
    else{
        return binary_search(arr , start , mid-1 , key);
    }

}

int main(){

    int arr[6] = {2,4,6,10,14,16};
    int start = 0;
    int end =  5;
    int key = 13;

    cout<<binary_search(arr , start , end , key)<<endl;

    return 0;
}