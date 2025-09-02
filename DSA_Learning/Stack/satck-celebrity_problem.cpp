#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// celebrity problem - celebrity knows no-one but known by everyone .
/*
 celebrity row always zero and column is 1 except diagonal element.
*/

int celebrity(vector<vector<int>> &M, int n)
{
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        s.push(i);
    }

    while (s.size() > 1)
    {
        int a = s.top();
        s.pop();

        int b = s.top();
        s.pop();

        if (M[a][b] == 1)
        {
            // a knows b, so a can't be celebrity
            s.push(b);
        }
        else
        {
            // a doesn't know b, so b can't be celebrity
            s.push(a);
        }
    }

    int candidate = s.top();
    
    // Verify the candidate is celebrity
    bool rowcheck = true;
    for (int i = 0; i < n; i++)
    {
        if (i != candidate && M[candidate][i] != 0)
        {
            rowcheck = false;
            break;
        }
    }

    bool colcheck = true;
    for (int i = 0; i < n; i++)
    {
        if (i != candidate && M[i][candidate] != 1)
        {
            colcheck = false;
            break;
        }
    }

    if (rowcheck && colcheck)
    {
        return candidate;
    }
    else
    {
        return -1;
    }
}

int main()
{
    // Example usage:
    int n = 3;
    vector<vector<int>> M = {{0, 1, 0},
                            {0, 0, 0},
                            {0, 1, 0}};
    
    int celeb = celebrity(M, n);
    if (celeb != -1)
    {
        cout << "Celebrity is: " << celeb << endl;
    }
    else
    {
        cout << "No celebrity found" << endl;
    }
    
    return 0;
}