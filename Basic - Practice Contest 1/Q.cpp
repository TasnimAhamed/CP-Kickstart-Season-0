#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int a, b, c;
    int x, y,z;

    cin >> a >> b >> c;
    cin >> x >> y >> z;

    cout << min({x / a, y / b, z / c}) << "\n";
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