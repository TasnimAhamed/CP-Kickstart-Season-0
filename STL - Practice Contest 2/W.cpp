#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }
    for (int i = 1; i < n; i++) {
        v[i] += v[i - 1];
    }
    int q; cin >> q;
    while (q--) {
        int x; cin >> x;
        int idx = lower_bound(v.begin(), v.end(), x) - v.begin();
        cout << idx + 1 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}