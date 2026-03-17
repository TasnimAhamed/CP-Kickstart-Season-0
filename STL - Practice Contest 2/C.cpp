#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    map<int, int> mp;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	mp[x]++;
    	x = mp[x];
    	ans += (i + 1 - x);
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