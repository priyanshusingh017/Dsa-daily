#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string checkbinary(int num){ 
    if (num ==0) return 0;
    string s ="";
    while(num>0){
        int n1 = num%2;
        s += to_string(n1);
        num=num/2;
    }
    reverse(s.begin() , s.end());
    return (s);
}

vector<string> printbinary(int n){
    vector<string>result1;
    for(int i=1 ; i<=n; i++){
        string n2 = checkbinary(i);
        result1.push_back(n2);
    }
    return result1;
}

// alternative way -> 
void printbinarycode(int num){
    for(int i=1; i<=num; i++){
        string binary =""; // Remeber it -> 
        int num1 = i;

        while(num1>0){
            binary += to_string(num1%2);
            num1= num1/2;
        }
        reverse(binary.begin() , binary.end());
        cout<<binary;
        if(i!=num) cout<<",";
    }
}

// method -2 -> 
void printbinarycode2(int num){
    for(int i=1; i<=num; i++){
        string binary =""; // Remeber it -> 
        int num1 = i;

        while(num1>0){
            binary = (num1%2==0 ? "0" : "1") + binary; // important 
            num1= num1/2;
        }
        cout<<binary;
        if(i!=num) cout<<",";
    }
}


int main(){

    int n;
    cin>>n;
    vector<string>result = printbinary(n);
    for(int i=0 ; i<result.size(); i++){
        cout<<result[i];
        if(i!=result.size()-1)cout<<" , ";
    }
    cout<<endl;
    printbinarycode(n);
    cout<<endl;
    printbinarycode2(n);


    return 0;
}