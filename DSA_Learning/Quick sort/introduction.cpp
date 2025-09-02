#include<iostream>
using namespace std;

int partition ( int * arr , int s , int e){

    int pivot = arr[s];

    int cunt = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot){
            cunt++;
        }
    }

    int pivotindex = s+cunt;
    swap(arr[pivotindex] , arr[s]);

    int i=s , j=e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotindex && j>pivotindex){
            swap(arr[i++] , arr[j--]);
        }

    }
    return pivotindex;
}

void quicksort(int *arr  , int s , int e){

    //base case 
    if(s>=e) return ;

    //partition kare ge 
    int p = partition(arr , s , e);

    //left part
    quicksort(arr , s , p-1);

    //right part
    quicksort(arr , p+1 , e);
}

int main(){

    /*
     // Quick sort is a divide-and-conquer sorting algorithm.
     // It selects a 'pivot' element and partitions the array so that
     // elements less than the pivot are on the left, and greater are on the right.
     // Then it recursively sorts the subarrays.
    */

    int arr[6] = {10,80,90,30,50,40};
    int n=6;

    quicksort(arr , 0 , n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}

// hw in-place
//stable