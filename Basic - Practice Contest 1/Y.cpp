#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int a, b, c; cin >> a >> b >> c;
    int x, y; cin >> x >> y;

    int mn = min({a, b, c});
    int smx = INT_MAX;
    if (a != mn and a < smx) {
        smx = a;
    }
    if (b != mn and b < smx) {
        smx = b;
    }
    if (c != mn and c < smx) {
        smx = c;
    }

    int mnx = min(x, y);
    int mny = max(x, y);

    if (mn <= mny and smx <= mny) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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