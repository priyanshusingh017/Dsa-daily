#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void checkprime(int n){
    bool flag=1;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==0){
        cout<<"prime"<<endl;
    }else{
        cout<<"not prime"<<endl;
    }
}
using namespace std;

int main(){

    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    checkprime(n);

    return 0;
}