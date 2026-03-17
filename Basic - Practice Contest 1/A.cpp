#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	set<int> st;
    for (int i = 0; i < 3; i++) {
    	int x; cin >> x;
    	st.insert(x);
    }

    cout << st.size() << "\n";
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