#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    multiset<pair<int, int>, greater<pair<int, int>>> left;
    multiset<pair<int, int>> right;

    for (int i = 0; i < n; i++) {
        int x, a; cin >> x >> a;
        if (x > 0) {
            right.insert({x, a});
        }
        else {
            left.insert({x, a});
        }
    }
    // cout << "Left: " << left.size() << "\n";
    // for (auto [a, b] : left) {
    //     cout << a << " " << b << "\n";
    // }
    // cout << "Right: " << right.size() << "\n";
    // for (auto [a, b] : right) {
    //     cout << a << " " << b << "\n";
    // }

    int ans = 0;
    while (!left.empty() and !right.empty()) {
        ans += (left.begin()->second + right.begin()->second);
        left.erase(left.begin());
        right.erase(right.begin());
    }

    if (!left.empty()) {
        ans += left.begin()->second;
    }

    if (!right.empty()) {
        ans += right.begin()->second;
    }

    cout << ans << "\n";

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