#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int res = 0;
    while (n--) {
    	string s; cin >> s;
    	if (s[1] == '+') {
    		++res;
    	}
    	else {
    		--res;
    	}
    }
    cout << res << "\n";
}

ABCWUB

WUBIWUBamWUBlearningWUBCWUB

IWUBAM

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
