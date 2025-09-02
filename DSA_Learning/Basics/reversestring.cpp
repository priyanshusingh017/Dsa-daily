#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//using backward method -> 
string reverseString(string& s){

    string res = "";
    for(int i=s.size(); i>=0; i--){
        res += s[i];
    }
    return res;
}

//using inbuilt method -> 
string reverse1(string & s){
    reverse(s.begin(), s.end());

    return s;
}

//using two pointer -> 
string reverse2(string & s){
    int l =0 , r = s.size();

    while(l<r){
        swap(s[l] , s[r]);
        l++;
        r--;
    }
    return s;
}

// using stack function -> 
string reverse3(string & s){
    stack<char>st;

    for(int i=0 ; i<s.size(); i++){
        st.push(s[i]);
    }

    for(int j=0; j<s.size(); j++){
        s[j] = st.top();
        st.pop();
    }
    return s;
}

int main(){


    string s = "abdcfe";
    string res = reverseString(s); // using backward 
    cout << res <<endl;

    string s1 ="geeksforgeeks";
    cout<<reverse1(s1)<<endl; //using in-built function 

    string s2 ="abcdeg";
    cout<<reverse2(s2)<<endl; // using two pointer 

    string s3 = "abdcefgh";
    cout<<reverse3(s3)<<endl; // using stack method 


    return 0;
}