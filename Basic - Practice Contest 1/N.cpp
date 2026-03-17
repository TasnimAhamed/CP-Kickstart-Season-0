#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int Y;
	cin >> Y;

	if (Y % 4 == 0 and Y % 400 != 0) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	
	return 0;
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