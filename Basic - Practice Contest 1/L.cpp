#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s; cin >> s;
    for (int i = 1; i < 5; i++) {
        if (s[i - 1] >= s[i]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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