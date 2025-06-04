#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void armstrong(int n){

    int k=to_string(n).length();

    int num=n;
    int sum=0;
    while(n>0){
        int lastdigit=n%10;
        sum += pow(lastdigit,k);
        n=n/10;
    }
    if(num==sum){
        cout<<"armstrong number"<<endl;
    }else{
        cout<<"not an armstrong number"<<endl;
    }
}

int main(){

    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    armstrong(n);

    return 0;
}