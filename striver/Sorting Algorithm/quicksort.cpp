#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int partionindex(vector<int>&arr , int s , int e){

    int piviot = arr[s];

    int count =0;
    for(int i=s+1; i<=e; i++){
        if(arr[i]<=piviot){
            count++;
        }
    }

    int piviotindex = s+count;
    swap(arr[piviotindex] , arr[s]);

    int i=s , j=e;
    while(i<piviotindex && j>piviotindex){

        while(arr[i]<piviot){
            i++;
        }
        
        while(arr[j]>piviot){
            j--;
        }

        if(i<piviotindex && j>piviotindex){
            swap(arr[i++] , arr[j--]);
        }
    }

    return piviotindex;
}

void quicksort(vector<int>&arr , int s , int e){

    // base case -
    if(s>=e){
        return ;
    }

    // find the partionindex -
    int p = partionindex(arr , s , e);

    quicksort(arr , s , p-1);

    quicksort(arr , p+1 , e);

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
    quicksort(arr , 0 , n-1);
    printarray(arr , n);

    return 0;
}