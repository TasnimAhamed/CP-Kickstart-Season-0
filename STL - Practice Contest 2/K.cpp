#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    vector<string> words;
    while (ss >> word) {
    	words.push_back(word);
    }
    int len = words.size();
    for (int i = 0; i < len; i++) {
    	reverse(words[i].begin(), words[i].end());
    	cout << words[i] << (i == len - 1 ? "\n" : " ");
    }


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    cin.ignore();
    while (t--) {
        solve();
    }

    return 0;
}