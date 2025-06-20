#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxDistance(string s, int k) {
    int x = 0 , y=0 , maxmd =0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='N') y++;
        else if (s[i]=='S') y--;
        else if (s[i]=='E') x++;
        else if (s[i]=='W') x--;

        int curmd = abs(x) + abs(y); 
        int wasted = (i+1) - curmd ; 
        
        int extra = min(2*k , wasted);
        int finalmd = curmd + extra ;

        maxmd = max(maxmd , finalmd);
    }
    return maxmd;
}


int main(){

    string s = "NWSE";
    cout<<maxDistance(s , 1)<<endl; // 3
    string s1 = "NSWWEW";
    cout<<maxDistance(s1 , 3)<<endl; // 6


    return 0;
}