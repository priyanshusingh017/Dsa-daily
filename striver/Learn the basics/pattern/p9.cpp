#include <iostream>
using namespace std;

/* This program prints a straight pyramid followed by 
a reverse pyramid pattern using stars.

     *
    ***
   *****
  *******
 *********
 *********
  *******
   *****
    ***
     *

*/

int main()
{

    // straight pyramid -

    for (int i = 1; i <= 5; i++)
    {
        // space
        for (int j = 1; j<= 5 - i; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }

    // reverse pyramid -

    for (int i = 5; i>=0; i--)
    {
        // space
        for (int j = 1; j<= 5 - i; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 1; j <=2 * i - 1; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }

    return 0;
}