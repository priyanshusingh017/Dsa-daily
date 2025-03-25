# include <iostream>
using namespace std;

int main(){
    /*int a=4 ;
    int b=6;
    cout << "a&b " << (a&b) <<endl;
    cout << "a|b " << (a|b) <<endl;
    cout << "~a " << ~a << endl;
    cout << "a^b " << (a^b) << endl;
    
    cout<<endl;
    cout <<(17>>1)<< endl;
    cout <<(17>>2)<< endl;
    cout <<(19<<1)<< endl;

    int i=7;
    cout<<i++<<endl;//7
    cout<<++i<<endl;//9
    cout<<i--<<endl;//9
    cout<<--i<<endl;//7
*/
     /*int a=0;
     int b=1;
     cout<< a <<" "<< b <<" ";
     for(int i=0 ; i<=10 ; i++){
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
     }
     */
    // check the prime number
    /*
    int n;
    cin>>n;
    int isprime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            //cout<<"not a prime "<<endl;
            isprime=0;
            break;
        }
    }
    if (isprime==1){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
    */
    
   //upto prime number
   /*
   int n;
   cin>>n;
   for(int i=2;i<=n;i++){
    int isprime=1;
    for(int j=2;j<=i-1;j++){
        //cout<<j<<endl;
        if(i%j==0){
            isprime=0;
            break;
        }
        }
        if(isprime){
        cout<<i<<endl;
        }
    }
    */
   //continue function 
   /*for(int i=0;i<2;i++){
    cout<<"hello"<<endl;
    continue;
    cout<<"reoly tho te bhai"<<endl;
   }
   */
  int i=3;
  //cout<<b<<endl;
  for(;i<6;i++){
    cout<<"hi"<<" ";
  }
    return 0;
}