#include<iostream>
#include<bits/stdc++.h>
using namespace std;



vector<int> lexicalOrder(int n) {  // time complexity -> 0(n^2)
    vector<string>st;
    for(int i=1 ; i<=n; i++){
        st.push_back(to_string(i)); // change the int to string value -> using *to_string* function 
    }
    vector<int>result;
    sort(st.begin(), st.end()); // sort the string element of st in lexicographically order 
    for(auto it : st){
        result.push_back(stoi(it)); // change the string to int value -> using *stoi* function 
    }
    return result;
        
}

void dfs(int temp , int n , vector<int>&sol){
    if(temp>n){
        return ;
    }
    sol.push_back(temp);
    for(int i=0; i<=9; i++){
        int next = temp*10 + i;
        if(next>n){
            break;
        }
        dfs(next , n , sol);
    }
}

vector<int> lexicalOrder1(int n) {
    vector<int>sol;
    for(int i=1; i<=9; i++){
        dfs(i, n , sol);
    }
    return sol;    
}


int main(){

    int n;
    cin>>n;

    vector<int>st1 = lexicalOrder1(n);
    for(auto i : st1){
        cout<<i<<" ";
    }
    return 0;

}