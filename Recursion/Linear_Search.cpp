#include<iostream>
using namespace std;

bool linear_Search(int arr[] , int size , int key){

    //base case 
    if(size==0) return false;

    if(arr[0]==key){
        return true;
    }
    else{
        return linear_Search(arr+1 , size-1 , key);
    }

}

int main(){

    int arr[5] = {3,5,1,2,6};
    int size = 5;
    int key = 2;

    cout<<linear_Search(arr , size , key); 
    // 1 -> present , 0 -> absent 
    return 0;
}