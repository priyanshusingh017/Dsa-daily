#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int addDigits(int num) {

    if(num==0) return num;
    // 38 -> 3+ 8 ->  11 -> 1+1 -> 2 
    string n = to_string(num);
    while(num>=10){
        int sum =0;
        while(num>0){
            int digit = num%10;
            sum += digit ;
            num /= 10;
        }
        num = sum;
    }
    return num;

}

int addDigits1(int num) {

    if(num==0) return 0;
    return (num%9)==0 ? 9 : num%9;
    // add digit -> num%9 == 0 means that root number is -> 9 
    // otherwise -> num%9 to get the remainder . 
}

int main(){


    cout<<"enter the number for add - digit number: "<<endl;
    int n;
    cin>>n;
    cout<<addDigits(n)<<endl;
    cout<<addDigits1(n)<<endl;

    return 0;
}