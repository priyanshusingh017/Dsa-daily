#include<iostream>
using namespace std;

void fibonacci(int n){
    int a=0;
    int b=1;
    int c;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<n;i++){
        c=a+b;
        cout<<c<<" ";
        swap(a,b);
        swap(b,c);
    }
}

int main(){

    int n;
    cout<<"enter the value of linit of fibonacci series"<<endl;
    cin>>n;
    fibonacci(n);
    return 0;
}