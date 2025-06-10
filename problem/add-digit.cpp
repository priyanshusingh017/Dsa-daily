#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int addDigits(int num) {

    // 38 -> 3+ 8 ->  11 -> 1+1 -> 2 
    string n = to_string(num);

    while((num%10)==0){
        int sum =0;
        while(num>0){
            int digit = num%10;
            sum += digit ;
            num /= 10;
        }
        num = sum;
    }

}


int main(){



    return 0;
}