#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int even = 0, odd = 0;
    for (int i = 0; i < 3; i++) {
        int x; cin >> x;
        if (x & 1) {
            ++odd;
        }
        else {
            ++even;
        }
    }

    if (odd and even) {
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