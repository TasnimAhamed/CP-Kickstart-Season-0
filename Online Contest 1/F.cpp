#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s; cin >> s;
    int n = s.size();

    vector<string> words;
    string word;
    for (int i = 0; i < n; i++) {
    	if (s[i] == 'W' and (i + 1 < n and s[i + 1] == 'U') and (i + 2 < n and s[i + 2] == 'B')) {
    		i += 2;
    		if (!word.empty()) {
    			words.push_back(word);
    			word = "";
    		}
    	}
    	else{
    		word += s[i];
    	}
    }
    if (!word.empty()) {
		words.push_back(word);
		word = "";
	}
	int sz = words.size();
	for (int i = 0; i < words.size(); i++) {
		cout << words[i] << (i == sz - 1 ? "\n" : " ");
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