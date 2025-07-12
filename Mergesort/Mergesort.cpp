#include<iostream>
using namespace std;

void merge(int * arr , int s , int e){

    int mid = s + (e-s)/2;

    int len1 = mid-s+1; // calculate the first half array length
    int len2 = e-mid;   // calculate the second half array length

    // create the two array with dynamic allocation 
    int * first = new int[len1];
    int * second = new int[len2];

    int k=s;
    // copy array in first array
    for(int i=0; i<len1; i++){
        first[i] = arr[k++];
    }
    k=mid+1;
    // copy array in  second array
    for(int i=0; i<len2; i++){
        second[i] = arr[k++];
    }

    // merge the sorted array 
    k = s;
    int index1=0;
    int index2=0;

    while(index1<len1 && index2<len2){
        if(first[index1] < second[index2] ){
            arr[k++] = first[index1++];
        }
        else{
            arr[k++] = second[index2++];
        }
    }

    while(index1<len1){
        arr[k++] = first[index1++];
    }
    while(index2<len2){
        arr[k++] = second[index2++];
    }

    delete [] first;
    delete [] second;

}

void mergesort(int * arr , int s , int e){

    //basecase->
    if(s>=e){
        return ;
    }

    int mid = s + (e - s)/2;

    mergesort(arr , s , mid);

    mergesort(arr , mid+1 , e);

    merge(arr , s ,e);
}

int main(){

    int arr[6] = {2,5,1,7,4,8};
    int n = 6;

    mergesort(arr , 0  , n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}