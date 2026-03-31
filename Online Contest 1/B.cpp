#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    stack<char> st;
    for (auto ch : s) {
    	if (!st.empty() and st.top() == ch) {
    		st.pop();
    	}
    	else {
    		st.push(ch);
    	}
    }

    cout << (st.empty() ? "YES\n" : "NO\n");
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