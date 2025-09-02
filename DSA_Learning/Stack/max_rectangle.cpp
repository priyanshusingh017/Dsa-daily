#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextsmallest(vector<int> &heights, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = heights[i];
        while (s.top() != -1 && heights[s.top()] >= curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

vector<int> prevsmallest(vector<int> &heights, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        int curr = heights[i];
        while (s.top() != -1 && heights[s.top()] >= curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

int largestareaArea(vector<int> &heights)
{

    int n = heights.size();

    vector<int> next(n);
    next = nextsmallest(heights, n);

    vector<int> prev(n);
    prev = prevsmallest(heights, n);

    int area = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int l = heights[i];

        if (next[i] == -1)
        {
            next[i] = n;
        }
        int b = next[i] - prev[i] - 1;

        int newarea = l * b;
        area = max(area, newarea);
    }

    return area;
}

int maxArea(vector<vector<int>> &mat)
{

    int n = mat.size();
    int m = mat[0].size();
    int area = largestareaArea(mat[0]);

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (mat[i][j] != 0)
            {
                mat[i][j] = mat[i][j] + mat[i - 1][j];
            }
            else
            {
                mat[i][j] = 0;
            }
        }

        area = max(area, largestareaArea(mat[i]));
    }

    return area;
}

int main() {
    vector<vector<int>> M = {
        {0, 1, 0},
        {1, 1, 1},
        {1, 1, 1}
    };
    cout << "The largest rectangle area is: " << maxArea(M) << endl;
    return 0;
}