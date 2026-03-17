#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (auto& x : v) {
    	cin >> x;
    	mp[x]++;
    }

    int mx = INT_MIN;

    for (auto [key, val] : mp) {
    	mx = max(mx, val);
    }
    cout << mx << "\n";

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