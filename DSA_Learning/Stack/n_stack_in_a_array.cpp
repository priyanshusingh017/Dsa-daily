#include <bits/stdc++.h> 
using namespace std;
class NStack
{
    int *arr;
    int *top;
    int *next;

    int n , s;
    int freespot;
    
    public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        
        n=N;
        s=S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];

        //top initialize
        for(int i=0; i<n; i++){
            top[i]=-1;
        }

        //next
        for(int i=0; i<s; i++){
            next[i]=i+1;
        }
        next[s-1]=-1;

        //free spot
        freespot =0;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // check for overflow 
        if(freespot == -1){
            return false;
        }

        // find index
        int index = freespot;
        //update freespot
        freespot = next[index];

        //insert element 
        arr[index] = x;

        //update next
        next[index] = top[m-1];

        // update top
        top[m-1] = index;

        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {

        //underflow 
        if(top[m-1]==-1){
            return false;
        }

        int index = top[m-1];
        top[m-1] = next[index];
        next[index] = freespot;
        freespot = index;
        return arr[index];
    }
};

int main() {
    // Create 3 stacks in an array of size 6
    NStack stacks(3, 6);

    // Test Case 1: Push elements to different stacks
    cout << "Pushing elements:" << endl;
    cout << "Push 10 to Stack 1: " << (stacks.push(10, 1) ? "Success" : "Failed") << endl;
    cout << "Push 20 to Stack 2: " << (stacks.push(20, 2) ? "Success" : "Failed") << endl;
    cout << "Push 30 to Stack 1: " << (stacks.push(30, 1) ? "Success" : "Failed") << endl;
    cout << "Push 40 to Stack 3: " << (stacks.push(40, 3) ? "Success" : "Failed") << endl;

    // Test Case 2: Pop elements
    cout << "\nPopping elements:" << endl;
    cout << "Pop from Stack 1: " << stacks.pop(1) << endl;
    cout << "Pop from Stack 2: " << stacks.pop(2) << endl;
    cout << "Pop from Stack 3: " << stacks.pop(3) << endl;

    // Test Case 3: Try to pop from empty stack
    cout << "\nPop from empty Stack 2: " << stacks.pop(2) << endl;

    return 0;
}