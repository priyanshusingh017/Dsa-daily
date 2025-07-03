#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void checkprime(int n){
    bool flag=true;
    if(n==1) flag = false;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"prime"<<endl;
    }else{
        cout<<"not prime"<<endl;
    }
}

// count prime numbers in range 1 to n
int countprime(int n){
    int count=0;
    vector<bool>isprime(n+1, true);
    isprime[0]=isprime[1]=false;
    for(int i=2; i<=n; i++){
        if(isprime[i]){
            count++;
            for(int j=2*i; j<=n; j=j+i){
                isprime[j]=false;
            }
        }
    }
    return count;
}

int main(){

    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    checkprime(n);

    cout<<"Count of prime numbers less than or equal to "<<n<<": "<<countprime(n)<<endl;

    return 0;
}