#include<iostream>
using namespace std;

class multi{
   public:
   void change(int a)
{
cout<<"number is int "<< a << endl;

}

void change ( float a) 
{
cout<<" number is float " << a << endl;
}

void change ( string a )
{
 cout << " number is string " << a << endl;
}
};
int main()
{

multi obj;
obj.change(2);
obj.change(2.5f);
obj.change("a");
return 0;
}