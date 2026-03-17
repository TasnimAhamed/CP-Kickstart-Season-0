#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    deque<int> d1, d2;
    int k; cin >> k;
    for (int i = 0; i < k; i++) {
    	int x; cin >> x;
    	d1.push_front(x);
    }
    cin >> k;
    for (int i = 0; i < k; i++) {
    	int x; cin >> x;
    	d2.push_front(x);
    }
    int cnt = 0;
    while (!d1.empty() and !d2.empty()) {
    	int card1 = d1.back();
    	d1.pop_back();
    	int card2 = d2.back();
    	d2.pop_back();

        // cout << card1 << " " << card2 << "\n";

    	if (card1 > card2){
    		d1.push_front(card2);
    		d1.push_front(card1);
    	}
    	else {
    		d2.push_front(card1);
    		d2.push_front(card2);
    	}

    	++cnt;
    	if (cnt > 110) {
    		cout << -1 << "\n";
            return;
    	}

    }

    if (d1.empty()) {
    	cout << cnt << " " << 2 << "\n";
    }
    else {
    	cout << cnt << " " << 1 << "\n";
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