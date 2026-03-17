#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	mp[x]++;
    }
    priority_queue<pair<int, int>> q;
    for (auto [key, val] : mp) {
    	q.push({val, key});
    }
    int ans = n;
    while (q.size() >= 2) {
    	auto [cnt1, x] = q.top();
    	q.pop();
    	auto [cnt2, y] = q.top();
    	q.pop();

    	cnt1--;
    	cnt2--;
    	ans -= 2;
    	if (cnt1) {
    		q.push({cnt1, x});
    	}
    	if (cnt2) {
    		q.push({cnt2, y});
    	}
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}