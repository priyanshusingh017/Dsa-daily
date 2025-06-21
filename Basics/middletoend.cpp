#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int>middlenum(vector<int>num){
    int n = num.size();
    int middle = n/2;
    vector<int>result;
    for(int i=middle ; i<n; i++){
        result.push_back(num[i]);
    }
    return result;
}

int main(){
    
    int n; // no. of testcase 
    cin>>n;
    vector<int>num;
    for(int i=0 ; i<n; i++){
        int n1; // input of testcase 
        cin>>n1;
        num.push_back(n1);
    }

    vector<int>result = middlenum(num);
    for(auto& c:result){
        cout<<c<<" ";
    }
    return 0;
}