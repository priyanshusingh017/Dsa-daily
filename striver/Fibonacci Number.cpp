#include <iostream>
using namespace std;

int fib(int n)
{

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int ans = 0;
    int a = 0, b = 1;
    for (int i = 2; i <= n; i++)
    {
        int c = a + b;
        ans = c;
        a = b;
        b = c;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
    for (int i = 0; i <= n; i++) {
      cout << fib(i) << " ";
    }

    return 0;
}