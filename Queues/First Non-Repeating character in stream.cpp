#include <iostream>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
  public:
    string FirstNonRepeating(string &s) {
        unordered_map<char,int>count;
        queue<int>q;
        string ans ="";
        for(auto i : s){
            count[i]++;

            q.push(i);

            while(!q.empty()){
                if(count[q.front()]>1){
                    q.pop();
                }
                else{
                    ans.push_back(q.front());
                    break;
                }
            }

            if(q.empty()){
                ans.push_back('#');
            }
        }
        return ans;
    }
};

int main(){
    string s = "aabc";
    Solution sol;
    string result = sol.FirstNonRepeating(s);
    cout << "Input stream: " << s << endl;
    cout << "First non-repeating characters: " << result << endl;
    return 0;
}