#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
  Given an array of integers: [1, 2, 1, 3, 2] and we are given some queries: [1, 3, 4, 2, 10]. 
  For each query, we need to find out how many times the number appears in the array. 
  For example, if the query is 1 our answer would be 2, and if the query is 4 the answer will be 0. 
*/

// using brute force -
int numbercount(int a[] , int number , int n){
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(a[i]==number){
            cnt++;
        }
    }
    return cnt;
}

// using hashing phase - 
int  countnumberphase(int a[] , int num , int n){
    
    int* hash = new int[6]();
    for(int i=0; i<n; i++){
        hash[a[i]] += 1;
    }
    int ans = hash[num];
    return ans;
}

// for charcter -
int countcharphase(char c , string & s){
    
    int hash[26] = {0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]-'a']++;
    }

    return hash[c-'a'];
}

// using hashmap - 
int countUsingMap(int a[], int num, int n) {
    unordered_map<int, int> freq;
    
    for(int i = 0; i < n; i++) {
        freq[a[i]]++;
    }
    
    return freq[num]; // Automatically returns 0 if not found
}

int main(){

    int n = 5;
    int a[] = {1,2,3,2,2};
    cout<<numbercount(a , 1 , 5)<<endl;
    cout<<countnumberphase(a , 2 , 5)<<endl;

    string s = "geeksforgeeks";
    cout<<countcharphase('e' , s)<<endl;

    cout<<countUsingMap(a,4,5)<<endl;



    return 0;
}