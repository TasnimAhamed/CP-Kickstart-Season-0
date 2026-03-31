#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll l, r;
    cin >> l >> r;
    for (ll a = l; a <= r; a++) {
    	for (ll b = a + 1; b <= r; b++) {
    		for (ll c = b + 1; c <= r; c++) {
    			ll ab = __gcd(a, b);
    			ll bc = __gcd(b, c);
    			ll ac = __gcd(a, c);
    			// cout << ab << " " << bc << " " << ac << "\n";
    			if (ab == 1 and bc == 1 and ac != 1) {
    				cout << a << " " << b << " " << c << "\n";
    				return;
    			}
    		}
    	}
    }

    cout << -1 << "\n";
    
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