#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool repeatedSubstringPattern(string s) {
    
    int size = (s.size())/2;
    // -> substr -> s.substr(pos , len )
    string st = s.substr(0 , abs(size));
    cout<<st<<endl;
    string s1 = s.substr(abs(size) , s.size());
    cout<<s1<<endl;
    if(st == s1){
        return true ;
    }
    else{
        return false;
    }
}


int main(){

    string s ="aaa";
    if(repeatedSubstringPattern(s)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

    return 0;
}