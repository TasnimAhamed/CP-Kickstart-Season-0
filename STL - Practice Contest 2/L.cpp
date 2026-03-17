#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    string s; cin >> n >> s;
    if (s == "FIFO") {
    	queue<int> q;
    	for (int i = 0; i < n; i++) {
    		string type; cin >> type;
    		if (type == "IN") {
    			int x; cin >> x;
    			q.push(x);
    		}
    		else {
    			if (q.empty()) {
    				cout << "None\n";
    			}
    			else {
    				cout << q.front() << "\n";
    				q.pop();
    			}
    		}
    	}
    }
    else {
    	stack<int> q;
    	for (int i = 0; i < n; i++) {
    		string type; cin >> type;
    		if (type == "IN") {
    			int x; cin >> x;
    			q.push(x);
    		}
    		else {
    			if (q.empty()) {
    				cout << "None\n";
    			}
    			else {
    				cout << q.top() << "\n";
    				q.pop();
    			}
    		}
    	}
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