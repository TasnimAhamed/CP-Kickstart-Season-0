#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int tt = 0;
void solve() {
	++tt;
	cout << "Case "<< tt << ":\n";
    int n, m; cin >> n >> m;
    deque<int> d;
    for (int i = 0; i < m; i++) {
    	string s; cin >> s;
    	if (s == "pushLeft" or s == "pushRight") {
    		int x; 
    		cin >> x;
    		if (d.size() >= n) {
    			cout << "The queue is full\n";
    		}
    		else if(s == "pushLeft") {
    			d.push_front(x);
    			cout << "Pushed in left: "<< x << "\n";
    		}
    		else {
    			d.push_back(x);
    			cout << "Pushed in right: "<< x << "\n";
    		}
    	}
    	else {
    		if (d.empty()) {
    			cout << "The queue is empty\n";
    		}
    		else if (s == "popLeft") {
    			int val = d.front();
    			d.pop_front();
    			cout << "Popped from left: " << val << "\n";
    		}
    		else {
    			int val = d.back();
    			d.pop_back();
    			cout << "Popped from right: " << val << "\n";
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