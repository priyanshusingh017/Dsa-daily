#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

// function to swap alernatively in an array

void swapalteenate(int arr[] , int n){
    for(int i=0;i<n; i+=2){
        if(i+1<n){
            
            // int temp = arr[i];
            //arr[i]=arr[i+1];
            //arr[i+1]=temp;
            //or we can use swap function to swap the elements

            swap(arr[i] , arr[i+1]);


        }
    }
}

// function to find unique elements in an array

int findunique(int *arr , int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    return ans;
}

// function to find the unqiue number of occuring element in an array

int findunique1(vector<int> arr){
    unordered_map<int , int>freq;

    for(int num: arr){
        freq[num]++;
    }

    unordered_set<int> ans;
    for(auto it : freq){
        if(ans.count(it.second)){
            return false;
        }
        ans.insert(it.first);

    }

    return true;

}


//function to find duplicate in an array 

int findduplicate(int *arr , int n){

    unordered_map<int , int>freq;
    
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    for(auto it : freq){
        if(it.second>1){
            return it.first;
        }
    }
    return -1; // if no duplicate found
    
}

     
void printarray(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    //swap alernatively in an array

    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    swapalteenate(arr , n);
    cout<<"swapping alernatively in an array"<<endl;
    printarray(arr , n);


    //find unique elements in an array
    int arr2[]={1,2,3,4,5,6,7,1,2,3,4,5,6};
    int n2=sizeof(arr2)/sizeof(int);
    int ans=findunique(arr2 , n2);
    cout<<"unique element in an array is : "<<ans<<endl;


    //find duplicate in an array
    int arr3[]={3,3,3,3,3};
    int n3=sizeof(arr3)/sizeof(int);
    int ans2=findduplicate(arr3 , n3);
    if(ans2==-1){
        cout<<"no duplicate found"<<endl;
    }else{
        cout<<"duplicate element in an array is : "<<ans2<<endl;
    }


    //find unique number of occuring element in an array
    vector<int> arr4={1,2,2,1,1,3};
    int n4=arr4.size();
    cout<<findunique1(arr4)<<endl;

    return 0;
}