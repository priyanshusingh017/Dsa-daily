#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string clearStars(string s) {  // not optiminal 
    string result ; 
    for(auto c : s){
        if(c=='*'){
            if(!result.empty()){
                int minchar ='z'+1;
                int minindex =-1;
                for(int i=result.size()-1; i>=0; i--){
                    if(result[i]< minchar){
                        minchar = result[i];
                        minindex = i;
                    }
                }
                if(minindex !=-1){
                    result.erase(minindex , 1);
                }
            }
                
        }
        else{
            result.push_back(c);
        }
    }
        return result;
}


int main(){

    string s = "aaba*";
    string s1 = "a*q";
    
    string a = clearStars(s);
    string c = clearStars(s1);

    cout<<a<<endl;   
    cout<<c<<endl;


    return 0;
}