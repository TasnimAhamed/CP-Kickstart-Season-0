#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    n = abs(n);
    if (n % 3 == 0 and (n % 2 == 0 and (n >= 10 and n <= 99))) {
            cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}