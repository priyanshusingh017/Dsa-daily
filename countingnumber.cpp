#include<iostream>
#include<cmath>
using namespace std;

void counting(int n){   //time complexity is O(log10(n))
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<"number of digits in the number is "<<count<<endl;
}

void counting1(int n){   //time complexity is O(log10(n))
    int count=0;
    count= int(log10(n)+1);
    cout<<"number of digits in the number is "<<count<<endl;
}

int main(){

    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    counting1(n);


    return 0;
}