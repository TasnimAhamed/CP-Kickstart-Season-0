#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int g, s, b; cin >> g >> s >> b;
    cout << (5 - g) + (5 - s) + (5 - b) << "\n";
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