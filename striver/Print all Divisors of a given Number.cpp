#include<iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

vector<int> findDivisors(int n){

    vector<int>result ;

    int sqrtN = sqrt(n);

    for(int i=1; i<=sqrtN; i++){

        if(n%i==0){
            result.push_back(i);
        }

        if(i != n/i){
            result.push_back(n/i);
        }
    }

    sort(result.begin() , result.end());
    return result;
}
int main(){

    int n;
    cout<<"Enter the number :- ";
    cin>>n;

    vector<int>res=findDivisors(n);

    for(auto i : res){
        cout<< i << " ";
    }

    return 0;
}