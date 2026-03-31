#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s; cin >> s;
    int n = s.size();
    int paisi = 1;
    for (int i = 0; i < n; i++) {
    	if (s[i] == 'W' and (i + 1 < n and s[i + 1] == 'U') and (i + 2 < n and s[i + 2] == 'B')) {
    		i += 2;
    		if (!paisi) {
                cout << " ";
                paisi = 1;
            }
    	}
    	else{
    		cout << s[i];
            paisi = 0;
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