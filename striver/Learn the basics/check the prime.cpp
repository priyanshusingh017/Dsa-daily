#include<iostream>
#include <vector>
using namespace std;

bool checkprimenumber(int n){

    // edge condition -
    if(n<=1) return false;

    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }

    return true;
}

// count the prime number till n - sieve of eratosthenes

int countprimenumber(int n){

    vector<bool>isprime(n+1 , true);

    isprime[0] = isprime[1] = false;

    int count =0;

    for(int i=2; i<n; i++){
        if(isprime[i]){
            count++;
            for(int j=2*i; j<n; j=j+i){
                isprime[j]=false;
            }
        }
    }

    return count;
}

int main(){

    cout << checkprimenumber(3)<<endl;

    cout<< countprimenumber(20)<<endl;

    return 0;
}