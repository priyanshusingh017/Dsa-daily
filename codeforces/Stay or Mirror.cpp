#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    long long initial_inversions = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (p[i] > p[j]) {
                initial_inversions++;
            }
        }
    }

    long long total_change = 0;
    for (int i = 0; i < n; ++i) {
        int val = p[i];
        int num_greater_before = 0;
        for (int j = 0; j < i; ++j) {
            if (p[j] > val) {
                num_greater_before++;
            }
        }

        long long cost = (long long)n - val - (2LL * num_greater_before);
        if (cost < 0) {
            total_change += cost;
        }
    }

    long long final_answer = initial_inversions + total_change;
    cout << final_answer << " " << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}