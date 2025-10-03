#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
  same concepts as pow(x,n) -> 

  function as a^b :

  if b is even :-  ans = a^b/2 * a^b/2;
  example -> 2^4 - 2^2 * 2^2 ;

  if b is odd :- ans = a * ({ a^b/2 * a^b/2 });
  example -> 2^3 - 2 * ( 2^1 * 2^1 );
*/

/*
 A digit string is good if the digits (0-indexed) at even indices are even 
 and the digits at odd indices are prime (2, 3, 5, or 7).

 Given an integer n, return the total number of good digit strings of length n. 
 Since the answer may be large, return it modulo 109 + 7.

 Here we tackle digit position - 0 to 9 ->
 Even Index position count : {0,2,4,6,8}  :- count is 5 .
 Odd Index position count : {1,3,5,7} :- count is 4 .

*/

const long long mod = 1e9+7;

long long Pow(long long base , long long exp){

    long long res = 1;
    while(exp){
        if(exp&1) res = (res*base)%mod;
        base = (base*base)%mod;
        exp >>= 1;
    }
    return res;
}

int countGoodNumbers(long long n) {

    long long even = (n+1)/2;
    long long odd = (n/2);

    long long result = (Pow(5,even)*Pow(4,odd))%mod;

    return result;
}

int main(){
    long long n;
    cout << "Enter the length of the digit string: ";
    cin >> n;
    cout << "Number of good digit strings of length " << n << " is: " << countGoodNumbers(n) << endl;
    return 0;
}