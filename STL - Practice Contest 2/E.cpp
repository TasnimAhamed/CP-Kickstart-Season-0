#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<pair<int, int>> v(n);
    for (auto &x : v) {
    	cin >> x.first >> x.second;
    }
    sort(v.begin(), v.end(), [](auto &a, auto &b){
	    if (a.first != b.first) {
	    	return a.first < b.first;
	    }
	    return a.second > b.second;
	});

    for (auto& p : v) {
    	cout << p.first << " " << p.second << "\n";
    }
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