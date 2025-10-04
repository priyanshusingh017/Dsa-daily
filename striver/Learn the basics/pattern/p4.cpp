#include<iostream>
using namespace std;

/*
Pattern 4:
1
22
333
4444
55555
*/

int main(){

    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    }

    return 0;
}