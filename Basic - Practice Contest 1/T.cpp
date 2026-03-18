#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int x, y; cin >> x >> y;
    if ((y - x) == 1 or (x + 1 - y) % 9 == 0 and (x + 1 -  y) / 9 >= 0){
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
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