#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m; cin >> n >> m;
    set<int> st;
    st.insert({0, n});
    while (m--) {
    	int c, x; cin >> c >> x;
    	if (c == 1) {
    		st.insert(x);
    	}
    	else {
    		int up = *st.upper_bound(x);
    		int lo = *(--st.lower_bound(x));
    		cout << up - lo << "\n";
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