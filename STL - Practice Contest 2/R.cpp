#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    set<string> st;
    for (int i = 0; i < n; i++) {
    	string s; cin >> s;
    	if (st.find(s) == st.end()) {
    		cout << "NO\n";
    		st.insert(s);
    	}
    	else {
    		cout << "YES\n";
    	}
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