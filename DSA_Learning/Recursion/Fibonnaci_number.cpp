#include<iostream>
using namespace std;

void fibonnaci_series1(int n){
    
    int a = 0;
    int b = 1;
    cout<< a << " " << b << " " ;
    for(int i=0; i<n; i++){
        int c = a+b;
        cout << c << " ";
        swap(a , b);
        swap(b , c);
    }
}


int fibonnaci_series(int n){

    //base 
    if (n==0 ) return 0;

    if (n==1) return 1;

    return fibonnaci_series(n-1) + fibonnaci_series(n-2);


}

int main(){

    int n; 
    cin>>n;

    fibonnaci_series1(n);
    cout<<endl;
    cout<<fibonnaci_series(n);

    return 0;
}