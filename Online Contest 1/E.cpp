#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    for (int i = 0; i < n; i++) {
    	if (v[i] % 2 == 0) {
    		cout << 1 << "\n" << i + 1 << "\n";
    		return;
    	}
    }

    if (n == 1){
        cout << -1 << "\n";
    }
    else {
        cout << 2 << "\n";
        cout << "1 2" << "\n";
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