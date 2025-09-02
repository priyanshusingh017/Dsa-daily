#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int>nextsmallestelement(vector<int>&arr){

    int n = arr.size();
    stack<int>s;
    s.push(-1);
    vector<int>ans(n);
    for(int i=n-1; i>=0; i--){
        int curr = arr[i];
        while(s.top()>=curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
    
}



int main(){

    vector<int>arr =  {2,1,4,3};

    vector<int>res = nextsmallestelement(arr);
    for(auto i : res){
        cout<<i<<" "; // 1 , -1 , 3 , -1
    }


    return 0;
}