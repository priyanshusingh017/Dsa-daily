#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// question to find the number is jumbled or not -> like -> 121 = abs(1-2) = abs(2-1) = 1;
// 132 = abs(1-3) != abs(3-2) not jumbled ;

bool isjumblednumber(string s){
    for(size_t i = 0 ; i<s.length()-1 ; i++){
        int currentdigit = s[i] - '0' ; // convert string to int
        int nextdigit = s[i+1] - '0';

        if(abs(currentdigit - nextdigit)>1){
            return false ;
        }
    }
    return true;
}

int main(){

    string number ;
    cin>>number;

    if(isjumblednumber(number)){
        cout<<"Jumbled"<<endl;;
    }
    else{
        cout<<"Not Jumbled"<<endl;
    }

    return 0;
}