#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    map<string, int> marks;

    int q; cin >> q;
    while (q--) {
    	int type; cin >> type;
    	string name; cin >> name;
    	if (type == 1) {
    		int mark; cin >> mark;
    		marks[name] += mark;
    	}
    	else if (type == 2) {
    		if (marks.find(name) != marks.end()) {
    			marks.erase(name);
    		}
    	}
    	else {
    		if (marks.find(name) != marks.end()) {
    			cout <<  marks[name] << "\n";
    		}
    		else {
    			cout << "0\n";
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