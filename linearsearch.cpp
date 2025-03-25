#include<iostream>
using namespace std;

// Linear Search Function 
// This function will take 3 arguments
// 1. arr[] : array in which we have to search the key
// 2. n : size of the array
// 3. key : key which we have to search in the array
// This function will return true if the key is present in the array
// otherwise it will return false

bool search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return true;
        }
    }

    return 0;
}
int main(){

    int arr[10]={1,2,3,4,5,6,7,8,19,10};

    cout<<"enter the key value "<<endl;
    int key; cin>> key;

    if(search(arr,10,key)){
        cout<<"key is present"<<endl;
    }else{
        cout<<"key is not present"<<endl;
    }

    return 0;
}