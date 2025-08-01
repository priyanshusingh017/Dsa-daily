#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;

    long long total_sum = 0;
    int zero_count = 0;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        total_sum += x;
        if (x == 0) {
            zero_count++;
        }
    }

    long long max_score = total_sum + zero_count;

    cout << max_score << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}