#include<iostream>
#include<vector>
using namespace std;

void rightrotate(vector<int>&nums , int k){

    int n = nums.size();

    vector<int>temp(n);
    for(int i=0; i<n; i++){
        temp[(i+k)%n] = nums[i];
    }
    nums = temp;
}

void leftrotate(vector<int>&nums , int k){

    int n = nums.size();

    vector<int>temp(n);
    for(int i=0; i<n; i++){
        temp[i] = nums[(i+k)%n];
    }

    nums = temp;
}

int main(){

    vector<int>nums = {7,5,2,11,2,43,1,1};
    cout<<"Original array before rotation : 7,5,2,11,2,43,1,1 "<<endl;

    leftrotate(nums , 2);
    cout<< "After left rotation : ";
    for(auto i : nums){
        cout<< i << " ";
    }cout<<endl;

    vector<int>arr={1,2,3,4,5};
    cout<<"Original array before rotation : 1,2,3,4,5 "<<endl;
    rightrotate(arr , 2);
    cout<<"After right rotation: ";
    for(auto i : arr){
        cout<< i <<" ";
    }
    

    return 0;
}