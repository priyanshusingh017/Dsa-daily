#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr , int s , int e){

    // mid index - 
    int mid = s + (e-s)/2;

    // arr length distribution - same as (r-l+1)
    int len1 = mid-s+1; // (r=mid , l = s =>  mid-s+1)
    int len2 = e-mid;   // (r=e , l = mid+1 =>  e-mid-1+1 == e-mid)

    // create temporary arrays
    vector<int>first(len1);
    vector<int>second(len2);

    // copy data to temp arrays
    int k = s;
    for(int i=0; i<len1; i++){
        first[i] = arr[k++];
    }

    k=mid+1;
    for(int i=0; i<len2; i++){
        second[i]=arr[k++];
    }

    // merge the two sorted array -> 
    int index1 = 0 , index2 = 0;
    k=s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[k++] = first[index1++];
        }
        else{
            arr[k++] = second[index2++];
        }
    }

    // copy remaining elements of first array
    while(index1<len1){
        arr[k++] = first[index1++];
    }

    // copy remaining elements of second array
    while(index2<len2){
        arr[k++] = second[index2++];
    }

}


void mergesort(vector<int>&arr , int s , int e){

    //base case -
    if(s>=e){
        return;
    }

    // mid index -
    int mid = s + (e-s)/2;

    // recursively sort left half
    mergesort(arr , s , mid);
    
    // recursively sort right half
    mergesort(arr , mid+1 , e);

    merge(arr , s , e);
}

void printarray(vector<int>&arr , int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int>arr = {8,2,4,1,6,3,7};

    int n = arr.size();
    mergesort(arr , 0 , n-1);
    printarray(arr , n);

    return 0;
}