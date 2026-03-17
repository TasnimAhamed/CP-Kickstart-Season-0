#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k, p; cin >> n >> k >> p;
    k = abs(k);

    if ((n * p) < k) {
    	cout << -1 << "\n";
    }
    else {
        cout << (k / p + (k % p == 0 ? 0 : 1)) << "\n";
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