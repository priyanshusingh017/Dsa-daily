#include <iostream>
#include<bits/stdc++.h>

using namespace std;

//check the prime no. - 
bool isprime(int x){
    if(x<=1) return false;
    for(int i=2; i<x; i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

// cout prime no. - sieve of eratosthenes - 204
int countprime(int n){
    int count=0;
    vector<bool>isprime(n+1, true);
    isprime[0] = isprime[1]=false;
    for(int i=2; i<n; i++){
        if(isprime[i]){
            count++;
            for(int j=2*i; j<=n; j=j+i){
                isprime[j]=false;
            }
        }
    }
    return count;
}

// segment sieve - homework 

// euclid's algorithm - recursive version
int gcd(int a, int b){
    if(a==0) return b;
    if(b==0) return a;
    while(b!=0){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}
int gcd1(int a , int b){
    if(b==0) return a;
    return gcd1(a , a%b);
}
 
// (a+b)%m = a%m + b%m
// (a%m) - b%m = (a-b)%m
// (a%m * b%m) = (a*b)%m

// fast exponentiation 
int power(int a, int b, int m){
    int res=1;
    while(b>0){
        if(b&1){ // if b is odd
            res = (1LL * res * (a%m)) % m;
        }
        a = (1LL* (a)%m * (a)%m)%m ; // square the base
        b = b >> 1; // divide b by 2 - bit shift  
    }
    return res;
}

// pigeonhole principle 
// catalon number 
// inc-exd principle 

// 212! % m - 






int main(){

    int n;
    cin>>n;
    if(isprime(n)){
        cout<<n<<" is a prime number"<<endl;
    } else {
        cout<<n<<" is not a prime number"<<endl;
    }

    // fast exponentiation example
    int a, b, m;
    cout << "Enter base, exponent and modulus: ";
    cin >> a >> b >> m;
    int result = power(a, b, m);
    cout << "Result of " << a << "^" << b << " % " << m << " is: " << result << endl;






    return 0;
}