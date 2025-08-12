#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

class Solution
{
public:
    queue<int> reverseFirstK(queue<int> q, int k)
    {

        if (k <= 0 || k > q.size())
        {
            return q;
        }

        stack<int> s;
        int remaining = q.size() - k;

        // Push the first k elements into the stack
        for (int i = 0; i < k; i++)
        {
            s.push(q.front());
            q.pop();
        }

        // Enqueue the elements from the stack back into the queue (reversed order)
        while (!s.empty())
        {
            q.push(s.top());
            s.pop();
        }

        // Move the remaining elements to the end of the queue
        for (int i = 0; i < remaining; i++)
        {
            q.push(q.front());
            q.pop();
        }

        return q;
    }
};

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    int k = 3;
    cout << "Original queue: ";
    queue<int> temp = q;
    while (!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
    Solution sol;
    queue<int> res = sol.reverseFirstK(q, k);
    cout << "Queue after reversing first " << k << " elements: ";
    while (!res.empty())
    {
        cout << res.front() << " ";
        res.pop();
    }
    cout << endl;
    return 0;
}