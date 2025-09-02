#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        if (n < k) {
            return -1; // or handle as per problem constraints
        }
        int sum =0;
        for(int i=0; i<k; i++){
            sum += arr[i];
        }
        
        int ans = sum;
        for(int i=k; i<n; i++){
            sum += arr[i] - arr[i-k];
            ans = max(sum , ans);
        }
        
        return ans;
    }
};

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;
    Solution sol;
    int result = sol.maximumSumSubarray(arr, k);
    cout << "Maximum sum of subarray of size " << k << ": " << result << endl;
    return 0;
}