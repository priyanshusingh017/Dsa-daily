#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int bitscount(int n){
    int count =0;
    while(n!=0){
        count += n&1;
        n=n>>1;
    }
    return count;
}

bool isprime(int n){
    bool flag = true;
    if(n==1) flag = false;
    for(int i=2 ; i<n; i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }

    return flag;
}

int countPrimeSetBits(int left, int right) {

    int count = 0;

    for(int i=left; i<=right; i++){
        int num = bitscount(i);
        if(isprime(num)){
            count++;
        }
    }
    return count;
}

int main(){

    cout<<countPrimeSetBits(10,15)<<endl;


    return 0;
}
