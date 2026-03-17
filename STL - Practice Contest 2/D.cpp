#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int q; cin >> q;
    set<int> st;
    while (q--){
    	int x, y; cin >> x >> y;
    	if (x == 1) {
    		st.insert(y);
    	}
    	else if (x == 2){
    		auto it = st.find(y);
    		if (it != st.end()) {
    			st.erase(it);
    		}
    	}
    	else {
    		auto it = st.find(y);
    		if (it != st.end()) {
    			cout << "Yes\n";
    		}
    		else {
    			cout << "No\n";
    		}
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