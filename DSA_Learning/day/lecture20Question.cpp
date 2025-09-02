#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

vector<int>reversearray(vector<int>arr){
    int s=0;
    int e=arr.size()-1;

    while(s<=e){
        swap(arr[s] , arr[e]);
        s++;
        e--;
    }

    return arr;
}

void printarray(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void printa(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// function to merge two sorted arrays

void mergearray(int a[], int n , int b[] , int m , int arr3[]){

    int i=0 , j=0 , k=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            arr3[k++]=a[i++];
            //k++;
            //i++;
        }
        else{
            arr3[k++]=b[j++];
            //k++;
            //j++;
        }
    }

    //copy remaining elements of first array
    while(i<n){
        arr3[k++]=a[i++];
        //k++;
        //i++;
    }
    //copy remaining elements of second array
    while(j<m){
        arr3[k++]=b[j++];
        //k++;
        //j++;
    }
}

// function to move all zeroes to the end of the array
void movezeroes(int arr[] , int n){

    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j] !=0){
            swap(arr[j] , arr[i]);
            i++;
        }
    }

}

int main(){

    // Q1 . reverse an array

    vector<int>arr;

    arr.push_back(11);
    arr.push_back(7);
    arr.push_back(3);
    arr.push_back(12);
    arr.push_back(4);

    cout<<"printing the array"<<endl;
    printarray(arr);

    vector<int>ans= reversearray(arr);
    
    cout<<"reversed array"<<endl;

    printarray(ans);



    //Q2 . merge two sorted arrays

    int a[5]={1,3,5,7,9};
    int b[3]={2,4,6};

    int arr3[8]={0};

    mergearray(a,5,b,3,arr3);

    cout<<"merging two sorted arrays"<<endl;
    printa(arr3 , 8);


    //Q3. moves all zeroes to the end of the array
    int arr4[6]={0,1,0,3,12,0};

    movezeroes(arr4 , 6);
    cout<<"moving all zeroes to the end of the array"<<endl;
    printa(arr4 , 6);



    return 0;
}