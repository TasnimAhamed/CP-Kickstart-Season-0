#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    map<pair<int, int>, string> mp;
    for (int i = 0; i < n; i++) {
    	int x, y; cin >> x >> y;
    	string s; cin >> s;
    	mp[{x, y}] = s;
    }
    int m; cin >> m;
    for (int i = 0; i < m; i++) {
    	int x, y; cin >> x >> y;
    	cout << mp[{x, y}] << '\n';
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