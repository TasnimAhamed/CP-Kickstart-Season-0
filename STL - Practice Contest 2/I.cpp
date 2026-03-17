#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    deque<string> dq;
	
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int type; cin >> type;
		if (type == 1) {
			string s; cin >> s;
			dq.push_back(s);
		}
		else {
			string ans = dq.front();
			cout << ans << "\n";
			dq.pop_front();
			dq.push_back(ans);
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