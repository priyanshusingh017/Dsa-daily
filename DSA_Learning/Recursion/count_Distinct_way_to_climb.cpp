#include<iostream>
using namespace std;

/*
This function calculates the number of distinct ways to climb a staircase with n steps, where you can take either 1 or 2 steps at a time. It's a classic recursion problem, similar to computing the nth Fibonacci number.

Step-by-step explanation
Base Cases:

if (n < 0) return 0;
If you have a negative number of steps, there are no ways to climb.
if (n == 0) return 1;
If you have exactly zero steps left, you've found a valid way to reach the top.
Recursive Case:

return countway(n-1) + countway(n-2);
To reach step n, you could have come from step n-1 (taking 1 step) or from step n-2 (taking 2 steps). The function adds the number of ways to reach both those previous steps.
Analogy
Think of climbing stairs:

At each step, you decide to take either 1 or 2 steps.
The total ways to reach the top is the sum of ways to reach the previous step and the step before that.
Gotchas
Performance: This recursive solution is inefficient for large n because it recalculates the same values many times. Using memoization or an iterative approach would be much faster.
Stack Overflow: For large n, recursion depth may exceed stack limits.
Example
For n = 3:

Ways to climb:
1+1+1
1+2
2+1
So, countway(3) returns 3.
*/

int countway(long long n){
    //base case
    if (n < 0) return 0;

    if (n ==0) return 1;

    return countway(n-1) + countway(n-2);
}

int main(){

    int n;
    cin>>n;

    cout<<countway(n)<<endl;

    return 0;
}