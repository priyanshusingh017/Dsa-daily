#include<iostream>
using namespace std;
int main(){

    /*int a=4;
    int b=6;

    cout<<"a&b "<< (a&b) <<  endl;
    cout<<"a|b "<< (a|b) <<endl;
    cout<<"~a "<< (~a) <<endl;
    cout<<"a^b "<< (a^b) <<endl;
    */

   /*cout<<(17>>1)<<endl;
   cout<<(17>>2)<<endl;
   cout<<(19<<1)<<endl;
   cout<<(21<<2)<<endl;
   */
  
  /*int i=7;
  cout<<(++i)<<endl;//8
  cout<<(i++)<<endl;//8 i=9
  cout<<(i--)<<endl;//9 i=8
  cout<<(--i)<<endl;//7 i=7
  */

// 5 Question 
/*
 int a,b=1;
 a=10;
 if(++a){
    cout<<b<<endl;
 }
 else{
    cout<<++b;
 }

 int c=1;
 int d=2;
 if(c-- > 0 || ++d > 2){
    cout<<" stage 1 - inside if ";
 }
 else{
    cout<< "stage 2 - inside else ";
 }
 cout<<c<<" "<<d<<endl;

int number =3;
cout<<(25*(++number))<<endl;

int q =1;
int w=q++;
int e=++q;
cout<<w;
cout<<e;
*/

// FOR LOOP 

/*
int n;
cout<<"enter the value of n "<<endl;
cin>>n;

cout<<"printing count from 1 to "<<n<<" : "<<endl;
for(int i=1;i<=n;i++){
    cout<<i<<endl;
}
*/

/*
for(int a=0,b=1,c=2; a>=0||b>=1||c>=2; a--,b--,c--){
    cout<<a<<" "<<b<<" "<<c<<" "<<endl;
}
*/

//sum upto n
/*
int n;
cin>>n;
int sum=0;
for(int i=1;i<=n;i++){
    sum+=i;
}
cout<<sum;
*/

//fibonacci series
/*
int n;
cin>>n;
int a=0;
int b=1;
cout<<a<<" "<<b<<" ";
for(int i=1;i<=n;i++){
    int sum=a+b;
    cout<<sum<<" ";
    
    a=b;
    b=sum;
}

*/

//prime number 

/*int n;
cin>>n;
bool prime = true;
for(int i=2;i<n;i++){
    if (n%i==0){
        //cout<<"not a prime number "<<endl;
        prime = false;
        break;
    }
}
if (prime) {
    cout << "It is a prime number." << endl;
    } 
else {
    cout << "It is not a prime number." << endl;
    }
    */

//continue 

/*or(int i=0;i<=15;i+=2){
    cout<<i<<" ";
    if(int a=i&1){
        continue;
    }
    i++;
}*/
/*
for(int i=0;i<5;i++){
    for(int j=i;j<=5;j++){
        if(i+j==10){
            break;
        }
        cout<<i<<" "<<j<<endl;
    }
}
*/
//variable and scope 

int a=3;
cout<<a<<endl;
if(true){
    int a=5;
    cout<<a<<endl;
}
int i=8;
for (;i<8;i++){
    cout<<"hi"<<endl;
}

//operator precedence 



}
