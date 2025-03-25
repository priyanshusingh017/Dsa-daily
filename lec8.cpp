#include<iostream>
using namespace std;
int power(int a, int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}

bool iseven(int n){
    //odd
    if(n&1){return 0;}  

    return 1;
}

int factorial(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}
int ncr(int n , int r){
    int num = factorial(n);
    int den = factorial(r)*factorial(n-r);
    int ans =num/den;

    return ans;
}

void printcounting(int n){
    for(int i=1;i<=n;i++){
        cout<<i<< " ";
    }
}

void primenumber(int n) {
    for(int i=2;i<=n;i++){
        int isprime=1;
        for (int j=2;j<=i-1;j++){
            if(i%j==0){
                isprime=0;
                break;
            }
        }
        if(isprime==1){
            cout<<i<<endl;
        }
    }
}
int dummy(int n){
    n=n/2;
    //cout<<" n is "<<n << endl;
    return n;
}
int apfunction(int n){
    int ans =3*n+7;

    return ans;
}
void fibonnaciseries(int n){
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<=n;i++){
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}
int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        count = count + (n & 1);
        n = n >> 1;
    }
    return count;
}

int main(){
    /*
    //mini calculator
    int n;
    cin>>n;
    char b;
    cin>>b;
    char op;
    cout<<"enter the operator "<<endl;
    cin>>op;
    switch(op){
        case '+':
        cout<<n+b<<endl;
        break;
        case '-':
        cout<<n-b<<endl;
        break;    
        case '*':
        cout<<n*b<<endl;
        break;
        case '/':
        cout<<n/b<<endl;
        case '%':
        cout<<n%b<<endl;
        default :
        cout<<"you opt the opertor other thna the + - * /"<<endl;
    }
        */

       /*
       //currency requried 

       int n;
       cout<<"enter the amount"<<endl;
       cin>>n;
       //for(int i=0;i<=5;i++){
        int b;
        cout<<"enter the choice 1 and 2"<<endl;
        cin>>b;
        switch(b){
            case 1:
            cout<<"100 -  "<<n/100<<endl;
            n=n%100;
            cout<<"50 - "<<n/50<<endl;
            n=n%50;
            cout<<"20 - "<<n/20<<endl;
            n=n%20;
            cout<<"1 -"<<n/1<<endl;
            n=n%1;
            break;
            case 2:
            cout<<"try angain"<<endl;
        }
        */
        

       //function 

       /*int a,b;
       cin>>a>>b;
       cout<<power(a,b)<<endl;
        return 0;
        */

       /*
       //iseven 
       int n;
       cin>>n;
       if(iseven(n)){
        cout<<"even"<<endl;
       }
       else{
        cout<<"odd"<<endl;
       }
       */

      /* 
      //Ncr

      int n,r;
      cin>>n>>r;
      cout<<ncr(n,r)<<endl;
      */

      
      /*
      //counting 

      int n;
        cin>>n;
        printcounting(n);
        */

       /*
       //prime number using function
       int n;
       cout<<"enter the number "<<endl;
       cin>>n;
       cout<<"primenumber upto " <<n<<endl;
       primenumber(n);
       */

        /*
// passing the value to the function 
      int n;
      cin>>n;
      n=dummy(n);
      cout<< "number is "<< n << endl;

        */

       
       /*
       // ap function 
       int n;
       cout<<"enter the number "<<endl;
       cin>>n;
       cout<<apfunction(n)<<endl;
       */

      /*
      //fibonnaci series

      int n;
      cin>>n;
      fibonnaciseries(n);
      
      */

     //count of sets 

     int num1;
     cout<<"enter the num1"<<endl;
     cin>>num1;
     int num2;
     cout<<"enter the num2"<<endl;
     cin>>num2;
     cout<<"count of set bits"<<endl;
     cout<<countSetBits(num1)+countSetBits(num2)<<endl;

     return 0;
}