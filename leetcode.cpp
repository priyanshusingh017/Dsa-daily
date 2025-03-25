#include<iostream>
using namespace std;
int main(){

    //problem 1 
    /*
     int n;
    cin>>n;
    int product =1;
    int sum=0;
    while(n!=0){

        int digit =n%10;
        product=product*digit;
        sum=sum+digit;
        n/=10;
    }
    int answer = product -sum;
    cout<<answer;
    */

   //problem 2

   /*int n;
   cin>>n;
   int count=0;
   while(n!=0){
    if (n&1){
       count++;
    }
    n=(n/10);
   }
   cout<<count;*/

//PROBLEM 3 

   /*int n;
   cin>>n;
   int answer=0;
   while(n!=0){
    int digit=n%10;
    if(answer>INT32_MAX/10 || answer<INT32_MIN/10){
        cout<<0;
    }
    answer=answer*10+digit;
    n=n/10;
   }
   cout<<answer;*/

   int n=0;
   while(n>=0){
    cout<<n;
    n++;
   }
}
