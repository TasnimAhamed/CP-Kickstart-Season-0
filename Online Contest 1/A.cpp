#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    set<int, greater<int>> s;
    int cnt = 1;
    for (auto& x : v) {
    	cin >> x;
    	s.insert(cnt);
    	++cnt;
    }
    stack<int> st;
    vector<int> ans;
    int val = *s.begin();
    for (int i = n - 1; i >= 0; i--) {
    	st.push(v[i]);
    	if (v[i] == val) {    		
    		s.erase(s.begin());
    		while(!st.empty()) {
    			int top = st.top();
    			st.pop();
    			ans.push_back(top);
    		}
    		val = *s.begin();
    	}
    	else {
    		s.erase(s.find(v[i]));
    	}
    }
    while(!st.empty()) {
		int top = st.top();
		st.pop();
		ans.push_back(top);
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i] << (i == n - 1 ? "\n" : " ");
	}
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