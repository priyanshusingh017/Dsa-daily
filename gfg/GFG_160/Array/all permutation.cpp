#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void generateallpermutation(vector<int>&arr , vector<vector<int>>&res , int index){

    //base case
    if(index == arr.size()-1){
        res.push_back(arr);
        return;
    }

    for(int i=index; i<arr.size(); i++){

        // reverse the element 
        swap(arr[i] , arr[index]);

        generateallpermutation(arr , res , index+1);

        // backtrack the original 
        swap(arr[i] , arr[index]);
    }
}


void allpossiblepermutation(vector<int>&arr){

    vector<vector<int>>res;

    generateallpermutation(arr , res , 0);

    sort(res.begin() , res.end());

    for(auto i : res){
        cout<<"[";
        for(auto x : i){
            cout<<x<<" ";
        }
        cout<<"]";
    }
}

int main(){

    vector<int>arr = {1,2,3};

    allpossiblepermutation(arr);


    return 0;
}