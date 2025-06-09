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

int findKthNumber1(int n, int k) {  // time complexity -> 0(n^2)
    vector<string>st;
    for(int i=1 ; i<=n; i++){
        st.push_back(to_string(i)); // change the int to string value -> using *to_string* function 
    }
    vector<int>result;
    sort(st.begin(), st.end()); // sort the string element of st in lexicographically order 
    for(auto it : st){
        result.push_back(stoi(it)); // change the string to int value -> using *stoi* function 
    }
    return result[k-1];
        
}

void dfs(int temp , int n , vector<int>&sol , int k){
    if(temp>n){
        return ;
    }
    sol.push_back(temp);
    for(int i=0; i<=k; i++){
        int next = temp*10 + i;
        if(next>n){
            break;
        }
        dfs(next , n , sol , k);
    }
}

void dfs1(int temp , int n , vector<int>&sol){
    if(temp>n){
        return ;
    }
    sol.push_back(temp);
    for(int i=0; i<=9; i++){
        int next = temp*10 + i;
        if(next>n){
            break;
        }
        dfs1(next , n , sol);
    }
}

vector<int> lexicalOrder1(int n) {
    vector<int>sol;
    for(int i=1; i<=9; i++){
        dfs1(i, n , sol);
    }
    return sol;    
}

int findKthNumber(int n, int k) {
    
    vector<int>sol;
    for(int i=1; i<=9; i++){
        dfs(i, n , sol , k);
    }

    return sol[k-1];

}


int main(){

    int n;
    cin>>n;

    vector<int>st1 = lexicalOrder1(n);
    for(auto i : st1){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<findKthNumber(n , 2)<<endl;
    //cout<<findKthNumber1(n,2)<<endl;
    return 0;

}