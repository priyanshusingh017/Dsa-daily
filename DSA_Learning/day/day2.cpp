#include<iostream>
using namespace std;

int main(){
    /*int n;
    cin>> n;
    cout<<"hello"<<endl;
    if (n>0){
        cout<<"+ve number"<<endl;
    }
    else{
        cout<<"-ve number";
    }*/

    /*int a,b;
    cout<<"enter the value of a "<<endl;
    cin>>a;
    cout<<"enter the number of b "<<endl;
    cin>>b;
    if(a>b){
        cout<<"value of a is greater than b"<<endl;
    }
    else{
        cout<<"value of b is greater than a"<<endl;
    }*/
    
    /*int a;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    if(a>0){
        cout<<"positive number"<<endl;
    }
    else if (a<0){
        cout<<"negative number"<<endl;
    }
    else{
        cout<<"a is zero";
    }
    */
   
   /*int a=24;
   if(a<20){
    cout<<"love";
   }
   else if (a==24){
    cout<<"lovely";
   }
   else{
    cout<<"hate";
   }
   cout<<a;
   */
  /*char ch;
  cin>>ch;
  if(ch>='A'&& ch<='Z'){
    cout<<"upper case";
  }
  else if (ch>='a' && ch<='z')
  {
    cout<<"lower case";
  }
  else if (ch>='0'&& ch<='9')
  {
    cout << "numeric";
  }
  else{
    cout << "special character";
  }
  return 0;*/

  /*int n;
  cout<<"enter the number : "<<endl;
  cin>>n;
  int i=1;
  int sum=0;
  while(i<=n){
    //cout<<i<<" ";
    sum=sum+i;
    i++;
  }
  cout<<"sum of the number till "<<n<<" is :"<<endl;
  cout<<sum<<endl;
  return 0;*/

//Prime number check
  /*int q;
  cout<<"enter the value of n :"<<endl;
  cin>>q;
  int y =2;
  while(y<q){
    if(q%y == 0){
        cout<<"not prime"<<" ";
        return 0;
    }
    y++;
  }
  cout<<"prime"<<endl;
  return 0;*/
  

/*//sum of even number till n;
  int n;
  cout<<"enter the value of n :"<<endl;
  cin>>n;
  int i=2;
  int sum=0;
  while(i<=n){
    sum=sum+i;
    i=i+2;
    }
    cout<<sum<<endl;
    return 0;
    */

  /*/ //fahrenheit to celsius

   float fahrenheit;
   cout<<"temperature in fahrenheit :"<<endl;
   cin>>fahrenheit;
   float celsius=(5/9)*(fahrenheit-32);
   cout<<"temperature in celsius : "<< celsius;
   return 0;
   */
  
  //pattern1

  /*int n;
  cin>>n;
  int i=1;
  while (i<=n)
  {
    int j=1;
    while(j<=n){
        cout<<"*";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
  }*/

//pattern 2
  /*int n;
  cin>>n;
  int i=1;
  while (i<=n)
  {
    int j=1;
    while(j<=n){
        cout<<i;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
  */

 //pattern 3
  /* int n;
  cin>>n;
  int i=1;
  while (i<=n)
  {
    int j=1;
    while(j<=n){
        cout<<j<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
  */
 //pattern 3
  /* int n;
  cin>>n;
  int i=1;
  int count=1;
  while (i<=n)
  {
    int j=1;
    while(j<=n){
        cout<<n-j+1<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
  */

 //pattern 4
   /*int n;
  cin>>n;
  int i=1;
  int count =1;
  while (i<=n)
  {
    int j=1;
    while(j<=n){
        cout<<count<<" ";
        count=count+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
  */

 //pattern 5

  /* int n;
  cin>>n;
  int i=1;
  while (i<=n)
  {
    int j=1;
    while(j<=i){
        cout<<"*"<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
  */
 //pattern 6
  /*int n;
  cin>>n;
  int i=1;
  while (i<=n)
  {
    int j=1;
    while(j<=i){
        cout<<i<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
  */
 //pattern 7
  /* int n;
  cin>>n;
  int i=1;
  int count=1;
  while (i<=n)
  {
    int j=1;
    while(j<=i){
        cout<<count<<" ";
        count=count+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
  */

//pattern 8

  /* int n;
  cin>>n;
  int i=1;
  while (i<=n)
  {
    int j=1; 
    int value=i;
    while(j<=i){
        cout<<value<<" ";
        value++;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
  */
    /*int n;
  cin>>n;
  int i=1;
  while (i<=n)
  {
    int j=i;
    while(j<i*2){
        cout<<j<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
  */
 // pattern 9

 /*int n;
  cin>>n;
  int i=1;
  while (i<=n)
  {
    int j=1;
    while(j<=i){
        cout<<i-j+1<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
  */

 //pattern 10
  /*int n;
  cin>>n;
  int i=1;
  char a=65;
  while (i<=n)
  {
    int j=1;
    while(j<=n){
        cout<<a<<" ";
        
        j=j+1;
    }
    a++;
    cout<<endl;
    i=i+1;
  }
  */
  /*int n;
  cin>>n;
  int i=1;
  while (i<=n)
  {
    int j=1;
    while(j<=n){
        char a='A'+i-1;
        cout<<a<<" ";
        
        j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
  */

 //pattern 11

  /*int n;
  cin>>n;
  int i=1;
  char a=65;
  while (i<=n)
  {
    int j=1;
    while(j<=n){
        char b='A'+j-1;
        cout<<b<<" ";
        j=j+1;
    }
    //a++;
    cout<<endl;
    i=i+1;
  }*/

  //pattern 12
  /*int n;
  cin>>n;
  int i=1;
  char a=65;
  while (i<=n)
  {
    int j=1;
    while(j<=n){
        cout<<a<<" ";
        a++;
        j=j+1;
    }
  
    cout<<endl;
    i=i+1;
  }*/

  //Pattern 13

  /*int n;
  cin>>n;
  int i=1;
  char a=65;
  while (i<=n)
  {
    int j=1;
    while(j<=n){
        char b='A'+i+j-2;
        cout<<b<<" ";
        j=j+1;
    }
    //a++;
    cout<<endl;
    i=i+1;
  }*/

  //Pattern 14

  /*int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=i){
      char b='A'+i-1;
      cout<<b<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }*/

  //pattern 15

 /*int n;
  cin>>n;
  int i=1;
  char a='A';
  while(i<=n){
    int j=1;
    while(j<=i){
      //char b='A';
      cout<<a<<" ";
      a++;
      j++;
    }
    cout<<endl;
    i++;
  }*/

  //pattern 16

  /*int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=i){
      char b='A'+i+j-2;
      cout<<b<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }*/

// Pattern 17

/*int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    char b='A'+n-i;
    while(j<=i){
      cout<<b<<" ";
      b++;
      j++;
    }
    cout<<endl;
    i++;
  }*/

  //pattern 18
  /*int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    char b='A'+i-1;
    while(j<=n){
      cout<<b<<" ";
      b++;
      j++;
    }
    cout<<endl;
    i++;
  }*/

  //pattern 19 "left hand side right angle triangle"

  /*int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int a=n-i;
    while(a){
      cout<<" ";
      a--;
    }
    int j=1;
    while(j<=i){
      cout<<"*";
      j++;
    }
    cout<<endl;
    i++;
  }*/

  //pattern 20 "centre angle triangle or samosa ",{ with just " " }

  /*int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int a=n-i;
    while(a){
      cout<<" ";
      a--;
    }
    int j=1;
    while(j<=i){
      cout<<"*"<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }*/

  //pattern 21

  /*int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=n-i+1){
      cout<<"*"<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }*/

  //pattern 22

  /*int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int a=i-1;
    while(a){
      cout<<" ";
      a--;
    }
    int j=1;
    while(j<=n-i+1){
      cout<<"*";
      j++;
    }
    cout<<endl;
    i++;
  }*/

  //pattern23
  /*int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int a=i-1;
    while(a){
      cout<<" ";
      a--;
    }
    int j=1;
    while(j<=n-i+1){
      cout<<i;
      j++;
    }
    cout<<endl;
    i++;
  }*/

  //pattern 24

/* int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int a=n-i;
    while(a){
      cout<<" ";
      a--;
    }
    int j=1;
    while(j<=i){
      cout<<i;
      j++;
    }
    cout<<endl;
    i++;
  }*/

  //pattern 25

    /*int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int a=n-i;
    while(a){
      cout<<" ";
      a--;
    }
    int j=1;
    while(j<=i){
      cout<<i;
      j++;
    }
    cout<<endl;
    i++;
  }*/

  //pattern 26
  /*int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int a=i-1;
    while(a){
      cout<<" ";
      a--;
    }
    int j=1;
    while(j<=n-i+1){
      cout<<j<<"";
      j++;
    }
    cout<<endl;
    i++;
  }*/

  //pattern 27

  /*int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int a=i-1;
    while(a){
      cout<<" ";
      a--;
    }
    int j=1;
    int b=i;
    while(j<=n-i+1){
      cout<<j<<"";
      b++;
      j++;
    }
    cout<<endl;
    i++;
  }*/

  //pattern 28

  /*int n;
  cin>>n;
  int i=1;
  int b=i;
  while(i<=n){
    int a=n-i;
    while(a){
      cout<<" ";
      a--;
    }
    int j=1;
    while(j<=i){
      cout<<b<<" ";
      b++;
      j++;
    }
    cout<<endl;
    i++;
  }*/

 //pattern 29

 /*int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int a=n-i;
    while(a){
      cout<<" ";
      a--;
    }
    int j=1;
    while(j<=i){
      cout<<j<<"";
      j++;
    }
    int b=i-1;
    while(b){
      cout<<b<<"";
      b--;
    }
    cout<<endl;
    i++;
  }*/

//pattern 30

  /*int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=n-i+1){
      cout<<j<<" ";
      j++;
    }
    int a=1;
    while(a<=(i-1)*2){
      cout<<"*"<<" ";
      a++;
    }
    int b=n-i+1;
    while(b>=1){
      cout<<b<<" ";
      b--;
    }
    cout<<endl;
    i++;
  }*/
  



}
