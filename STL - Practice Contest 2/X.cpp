#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> v(n);
    for (auto& x : v) {
    	cin >> x;
    }
    sort(v.begin(), v.end());
    vector<int> ans;
    for (int i = 0; i < m; i++) {
    	int x; cin >> x;
    	int idx = upper_bound(v.begin(), v.end(), x) - v.begin();
    	ans.push_back(idx);
    }

    for (int i = 0; i < m; i++) {
    	cout << ans[i] << (i == m - 1 ? "\n" : " "); 
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