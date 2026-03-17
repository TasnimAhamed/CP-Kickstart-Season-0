#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    cin.ignore();
    set<pair<int, string>, greater<pair<int, string>>> names;
    for (int i = 0; i < n; i++) {
    	string line;
        getline(cin, line);
        
        int pos = line.find_last_of(' ');
        string name = line.substr(0, pos);
        int year = stoi(line.substr(pos + 1));

        names.insert({year, name});
    }
    for (auto& [age, name] : names) {
    	cout << name << "\n"; 
    }
}

cin >> x;
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