#include<iostream>
#include <math.h>
using namespace std;

//decimal to binary
int main(){
    int n;
    cin>>n;
    int ans=0 , i=0 ;
    /*while(n!=0){
        int bit=n&1;
        ans = (bit* pow(10,i)+ans);
        n=n>>1;
        i++;
    }*/
   //binary to decimal
   while(n!=0){
    int digit=n%10;
    if(digit==1){
        ans = digit*pow(2,i)+ans;
    }
    n=n/10;
    i++;
   }
    cout<<ans<<endl;

}
