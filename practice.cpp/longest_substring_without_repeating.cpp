#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "abcabcabcd";
    unordered_set<char>st;

    int left =0 , maxlength =0;
    for(int right =0; right<s.size(); right++){
        while(st.count(s[right])){
            st.erase(s[left]);
            left++;
        }
        st.insert(s[right]);

        maxlength = max(maxlength , right-left+1);
    }

    cout<<maxlength;

    return 0;
}