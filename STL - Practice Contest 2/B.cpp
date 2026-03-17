#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    int x; cin >> x;
    --x;
    int a, b; cin >> a >> b;
    --a;
    --b;
    v.erase(v.begin() + x);
    v.erase(v.begin() + a, v.begin() + b);

    cout << v.size() << "\n";
    for (int i = 0; i < v.size(); i++) {
    	cout << v[i] << (i == v.size() - 1 ? "\n" : " ");
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