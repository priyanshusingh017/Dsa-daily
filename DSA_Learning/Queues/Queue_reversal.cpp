#include<iostream>
#include<stack>
#include<queue>
using namespace std;
class Solution {
  public:
    queue<int> reverseQueue(queue<int> &q) {
        stack<int>s;
        while(!q.empty()){
            s.push(q.front());
            q.pop();
        }
        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }
        return q;
    }

    void reverseQueueRecursive(queue<int> &q) {
        if (q.empty()) return;
        int front = q.front();
        q.pop();
        reverseQueueRecursive(q);
        q.push(front);
    }
};

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << "Original queue: ";
    queue<int> temp = q;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    Solution sol;
    sol.reverseQueueRecursive(q);
    cout << "Reversed queue (recursion): ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}