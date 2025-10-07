#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int>UnionArray(vector<int>arr1 , vector<int>arr2){

    int n = arr1.size() , m = arr2.size();

    vector<int>res;

    int i=0 , j=0;

    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            if(res.size()==0 || res.back()!=arr1[i]){
                res.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(res.size()==0 || res.back()!=arr2[j]){
                res.push_back(arr2[j]);
            }
            j++;
        }

    }

    while(i<n){
        if(res.back()!=arr1[i]){
            res.push_back(arr1[i]);
        }
        i++;
    }

    while(j<m){
        if(res.back()!=arr2[j]){
            res.push_back(arr2[j]);
        }
        j++;
    }

    return res;
}

int main(){
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 3, 6, 8};

    vector<int> result = UnionArray(arr1, arr2);

    cout << "Union of two sorted arrays: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}