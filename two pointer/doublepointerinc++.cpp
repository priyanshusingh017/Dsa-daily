#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr1[10] = {2, 5, 6 , 7};

    /*
    cout<<"address of first memory location of arr is: "<< arr<<endl;
    cout<<arr[0]<<endl; // value of first index of arr
    cout<<"address of first memory location of arr is: "<< &arr[0]<<endl;


    cout<<"1st index of arr is: "<<*arr<<endl; // value at first index of arr
    cout<<"1st index of arr is: "<<*arr+1<<endl; // value at first index of arr + 1
    cout<<"1st index of arr is: "<<*(arr) +1<<endl;
    cout<<"2nd index of arr is: "<<*(arr+1)<<endl; // value at second index of arr
    cout<<"3rd index of arr is: "<<arr[2]<<endl;
    cout<<"3rd index of arr is: "<<*(arr +2)<<endl;

    //arr[i]=*(arr+i) 0r i[arr] = *(i+arr) both are same

    int i=3;
    cout<< i[arr]<<endl; // value at third index of arr
    */

    // int *p = &arr[0]; // pointer to first index of arr

    /*

    int temp[10] ={1,2};
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(*temp)<<endl; // size of address of temp is 8 bytes in 64 bit system
    cout<<sizeof(&temp)<<endl;

    int *p = &temp[0];
    cout<<sizeof(p)<<endl; // size of pointer is 8 bytes in 64 bit system
    cout<<sizeof(&p)<<endl; // size of address of pointer is 8 bytes in 64 bit system
    cout<<sizeof(*p)<<endl; // size of value at pointer is 4 bytes in 64 bit system
    */

    /*

    int arr[20] = {1, 2, 3,5};
    cout<<&arr[0]<<endl; // address of first index of arr
    cout<<arr<<endl; // address of arr is same as address of first index of arr
    cout<<&arr<<endl; // address of first index of arr is same as address of arr

    int *pq = &arr[0]; 
    cout<<pq<<endl;  // address of first index of arr
    cout<<&pq<<endl; // address of pointer pq
    cout<<*pq<<endl;  // value at first index of arr

    */

    

    int arr[10] ;
//error -> arr= arr+1; 

    int *p = &arr[0]; 
    cout<<p<<endl; // address of first index of arr 
    p=p+1;
    cout<<p<<endl; // address of second index of arr 

    
    
    return 0;
}