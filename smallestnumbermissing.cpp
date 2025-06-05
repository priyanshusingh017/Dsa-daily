#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &arr) {

    sort(arr.begin() , arr.end());
    int j=1;
    for(int i=0 ; i<arr.size(); i++){
        if(arr[i]>0){
            if(arr[i]==j){
                j++;
            }
        }
    }
    return j;
}

int main(){

    vector<int> arr = {-8, 0, -1, -4, -3};
    int num = missingNumber(arr);
    cout<<num<<endl;



    return 0;
}