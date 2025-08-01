#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <queue>

using namespace std;

const long long INF = 1e18;

// Function to check if Alice can win for a given arrangement
bool check(int n, long long s, const vector<int>& a) {
    vector<long long> min_sum(n + 1, INF);
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;

    min_sum[1] = a[0];
    pq.push({min_sum[1], 1});

    while (!pq.empty()) {
        auto [current_s, u] = pq.top();
        pq.pop();

        if (current_s > min_sum[u]) {
            continue;
        }

        // Move left
        if (u > 1) {
            int v = u - 1;
            if (min_sum[u] + a[v - 1] < min_sum[v]) {
                min_sum[v] = min_sum[u] + a[v - 1];
                pq.push({min_sum[v], v});
            }
        }
        // Move right
        if (u < n) {
            int v = u + 1;
            if (min_sum[u] + a[v - 1] < min_sum[v]) {
                min_sum[v] = min_sum[u] + a[v - 1];
                pq.push({min_sum[v], v});
            }
        }
    }

    long long s_min_reach = min_sum[n];

    if (s < s_min_reach) {
        return false;
    }
    if (s == s_min_reach) {
        return true;
    }

    long long diff = s - s_min_reach;
    
    vector<int> coins;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] + a[i+1] > 0) {
            coins.push_back(a[i] + a[i+1]);
        }
    }
    sort(coins.begin(), coins.end());
    coins.erase(unique(coins.begin(), coins.end()), coins.end());
    
    vector<bool> can_make(diff + 1, false);
    can_make[0] = true;

    for (int coin : coins) {
        for (long long i = coin; i <= diff; ++i) {
            if (can_make[i - coin]) {
                can_make[i] = true;
            }
        }
    }

    return can_make[diff];
}

void solve() {
    int n;
    long long s;
    cin >> n >> s;
    int c0 = 0, c1 = 0, c2 = 0;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        if (val == 0) c0++;
        else if (val == 1) c1++;
        else c2++;
    }

    // Candidate 1: [0s, 2s, 1s]
    vector<int> a1;
    for (int i = 0; i < c0; ++i) a1.push_back(0);
    for (int i = 0; i < c2; ++i) a1.push_back(2);
    for (int i = 0; i < c1; ++i) a1.push_back(1);

    if (!check(n, s, a1)) {
        for (int i = 0; i < n; ++i) {
            cout << a1[i] << (i == n - 1 ? "" : " ");
        }
        cout << endl;
        return;
    }

    // Candidate 2: [1s, 2s, 0s]
    vector<int> a2;
    for (int i = 0; i < c1; ++i) a2.push_back(1);
    for (int i = 0; i < c2; ++i) a2.push_back(2);
    for (int i = 0; i < c0; ++i) a2.push_back(0);

    if (!check(n, s, a2)) {
        for (int i = 0; i < n; ++i) {
            cout << a2[i] << (i == n - 1 ? "" : " ");
        }
        cout << endl;
        return;
    }
    
    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}