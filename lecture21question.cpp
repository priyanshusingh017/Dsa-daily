#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

//function to rotate an array by k time or left rotation 


void leftrotate(vector<int>arr , int k){

    int n = arr.size();
    vector<int>temp(n);

    for(int i=0 ; i<n ; i++){
        temp[(i-k+n)%n] = arr[i];
    }

    arr = temp;

    //printing the rotated array
    cout<<"left rotated array is : "<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

// function to rotate an array by k times /. right rotation

void rotate(vector<int>nums , int k){

    vector<int>temp(nums.size());

    //since we are rotating the array by k times, we need to find the new index of each element
    //new index = (i+k)%n //where n is the size of the array
    //and i is the current index of the element and k is the number of times we are rotating the array
    //and %n is used to wrap around the array if the new index is greater than n-1

    for(int i=0;i<nums.size();i++){
        temp[(i+k)%nums.size()]=nums[i];
    }

    //copying the elements of temp array to nums array

    nums=temp;

    //printing the rotated array
    cout<<"rotated array is : "<<endl;
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

}

// function to check if the array is sorted and rotated

bool checksortedandrotated(vector<int>nums){

    int count=0;
    for(int i=1;i<nums.size();i++){
        if(nums[i-1]>nums[i]){
            count++;
        }
    }
    if(nums[nums.size()-1]>nums[0]){
        count++;
    }
    if(count>=1){
        return false;
    }
    return true;
}

// function to add two arrays

void addarrays(vector<int>arr1 , vector<int>arr2){

    int n=arr1.size();
    int m=arr2.size();
    vector<int>ans;

    int i = n-1;
    int j = m-1;
    int carry=0;

    while(i>=0 && j>=0){
        int sum = arr1[i] + arr2[j] + carry;
        carry = sum/10;
        arr1[i] = sum%10;
        ans.push_back(arr1[i]);
        
        i--;
        j--;
    }

    //if arr1 is larger than arr2
    while(i>=0){
        int sum = arr1[i] + carry;
        carry = sum/10;
        arr1[i] = sum%10;
        ans.push_back(arr1[i]);
        i--;
    }

    //if arr2 is larger than arr1
    while(j>=0){
        int sum = arr2[j] + carry;
        carry = sum/10;
        arr2[j] = sum%10;
        ans.push_back(arr2[j]);
        j--;
    }

    cout<<"sum of two arrays is : "<<endl;
    if(carry!=0){
        ans.push_back(carry);
    }
    reverse(ans.begin(), ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


}



int main(){

    // Q1 . reverse an array // right rotate by k times 

    vector<int>nums={1,2,3,4,5,6,7};
    int k=3;
    rotate(nums , k);

    // left rotate by k times

    vector<int>arry={1,2,3,4,5};
    int k1 = 2;
    leftrotate(arry , k1);


    // Q2 . Sorted and rotated array
    vector<int>arr={3,4,5,1,2};
    if(checksortedandrotated(arr)){
        cout<<"array is sorted and rotated"<<endl;
    }
    else{
        cout<<"array is not sorted and rotated"<<endl;
    }

    // Q3 . adding two arrays

    vector<int>arr1={1,2,3,4};
    vector<int>arr2={6};
    addarrays(arr1 , arr2);





    return 0;
}