#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s; cin >> s;
    stack<char> st;
    for (auto ch : s) {
    	if (ch == '(' or ch == '{' or ch == '[') {
    		st.push(ch);
    	}
    	else {
    		if (st.empty()) {
    			cout << "NO\n";
    			return;
    		}
    		if (st.top() == '(' and ch == ')') {
    			st.pop();
    		}
    		else if(st.top() == '{' and ch == '}') {
    			st.pop();
    		}
    		else if (st.top() == '[' and ch == ']') {
    			st.pop();
    		}
    		else {
    			cout << "NO\n";
    			return;
    		}
    	}
    }
    if (st.empty()) {
    	cout << "YES\n";
    }
    else {
    	cout << "NO\n";
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