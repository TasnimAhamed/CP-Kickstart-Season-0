#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    map<string, string> old, nw;
    for (int i = 0; i < n; i++) {
    	string a, b; cin >> a >> b;

    	if (old.find(a) == old.end() and nw.find(a) == nw.end()) {
    		old[a] = b;
    		nw[b] = a;
    	}
    	else {
    		string key = nw[a];
    		old[key] = b;
    		nw[b] = key;
    		nw.erase(a);
    	}
    }
    
    cout << old.size() << "\n";
    for (auto [key, val] : old) {
    	cout << key << " " << val << "\n";
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