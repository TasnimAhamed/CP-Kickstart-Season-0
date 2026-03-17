#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m; cin >> n >> m;
    multiset<int> st;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	st.insert(x);
    }
    for (int i = 0; i < m;  i++) {
    	int x; cin >> x;
    	st.erase(st.begin());
    	st.insert(x);
    }

    ll ans = accumulate(st.begin(), st.end(), 0LL);

    cout << ans << "\n";
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