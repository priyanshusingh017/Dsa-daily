#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// without using recursion -> 
void fibonnaciseries(int n){
    
    int a = 0 , b = 1 ;
    cout<< a << " " << b << " ";
    for(int i=0; i<n-2; i++){
        int c = a+b;
        cout<< c << " ";
        swap(a,b);
        swap(b,c);
    }
}

// using recursion - 
int fibonnaci_series(int n){

    //base 
    if (n==0 ) return 0;

    if (n==1) return 1;

    return fibonnaci_series(n-1) + fibonnaci_series(n-2);
}

int main(){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci series without recursion: ";
    fibonnaciseries(n);

    cout << endl << "Fibonacci series using recursion: ";
    for(int i = 0; i < n; i++) {
        cout << fibonnaci_series(i) << " ";
    }
    cout << endl;

    return 0;
}