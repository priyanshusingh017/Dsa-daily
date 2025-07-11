#include<iostream>
using namespace std;

void SayDigit(int n , string arr[]){

    if(n==0) return;


    //processing 
    int digit = n%10;
    n=n/10;
    
    // recursive call
    SayDigit(n , arr);
    
    cout<< arr[digit] << " ";
}

int main(){

    string arr[10] = { "Zero" , "one" , "two" , "three" , "four" , "five" , "seven" , " eight" , "nine"};

    int n;
    cin>>n;

    SayDigit(n , arr);

    return 0;
}