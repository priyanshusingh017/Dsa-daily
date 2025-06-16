#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// max-difference-you-can-get-from-changing-an-integer

int maxdiff(int num){
    string s  = to_string(num);
    int n = s.size();
    char num1 = ' ';
    for(char &c:s){
        if(c != '9'){
            num1 = c;
            break;
        }
    }
    string maxnum = s;
    for(char & c : maxnum){
        if(c == num1) c  = '9';
    }

    string minnum = s;
    char num2 = ' ';
    if(minnum[0] != '1'){
        num2 = minnum[0];
        for(char &c : minnum){
            if(c==minnum[0]) c = '1';
        }
    }
    else{
        for(char &c : minnum){
            if(c!='0' && c!='1'){
                num2 = c;
                break;
            }
        }
        for(char &c : minnum){
            if(c == num2) c = '0';
        }
    }

    return stoi(maxnum) - stoi(minnum);
}

int main(){
    cout<< maxdiff(555)<<endl;
    cout<<maxdiff(92899)<<endl;



    return 0;
}