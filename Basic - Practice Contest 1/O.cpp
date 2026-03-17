#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int h,m;
    cin >> h >> m;

    double angle = abs((60 * h - 11 * m) / 2.0);
    double angle2 = 360 - angle;
    
    cout << fixed << setprecision(7) << (angle < angle2 ? angle : angle2) << "\n";
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