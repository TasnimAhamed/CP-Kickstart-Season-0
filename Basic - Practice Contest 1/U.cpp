#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int a, b, n; cin >> a >> b >> n;

    if (((b + 2) / 3) <= a) {
        cout << ((n / 3 * b + (n % 3) * a)) << "\n";
    }
    else {
        cout << (n * a) << "\n";
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