#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll a, b, c; cin >> a >> b >> c;

    ll d = b * b - 4 * a * c;
    if (d < 0) {
        cout << "No roots\n";
    }
    else if (d == 0) {
        ll x = -b / (2 * a);
        cout << "One root: " << x << "\n";
    }
    else {
        ll x1 = (- b + sqrt(d)) / (2 * a);
        ll x2 = (- b - sqrt(d)) / (2 * a);
        if (x1 > x2) {
            swap(x1, x2);
        }
        cout << "Two roots: " << x1 << " " << x2 << "\n";
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