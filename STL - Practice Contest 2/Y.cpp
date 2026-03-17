#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> price(n), front_color(n), back_color(n);
    for(auto &x : price) {
    	cin >> x;
    }
    map<int, multiset<pair<int, int>>> front, back;
    for (int i = 0; i < n; i++) {
    	cin >> front_color[i];
    	front[front_color[i]].insert({price[i], i});
    }
    for (int i = 0; i < n; i++) {
    	cin >> back_color[i];
    	back[back_color[i]].insert({price[i], i});
    }

    vector<int> ans;
    int m; cin >> m;
    for (int i = 0; i < m; i++) {
    	int x; cin >> x;
    	if (front[x].empty() and back[x].empty()) {
    		ans.push_back(-1);
    	}
    	else if(front[x].empty()) {
    		auto it = back[x].begin();
            int val = it->first;
            int idx = it->second;
    		ans.push_back(val);
    		back[x].erase(it);

            x = front_color[idx];
            auto new_it = front[x].find({val, idx});
            if (new_it != front[x].end()) {
                front[x].erase(new_it);
            }
    	}
    	else if(back[x].empty()) {
    		auto it = front[x].begin();
            int val = it->first;
            int idx = it->second;
    		ans.push_back(val);
    		front[x].erase(it);

            x = back_color[idx];
            auto new_it = back[x].find({val, idx});
            if (new_it != back[x].end()) {
                back[x].erase(new_it);
            }
    	}
    	else {
    		auto it = front[x].begin();
            int front_val = it->first;
            int front_idx = it->second;

    		auto it2 = back[x].begin();
            int back_val = it2->first;
            int back_idx = it2->second;
    		
    		if (front_val <= back_val) {
    			ans.push_back(front_val);
    			front[x].erase(it);
                 x = back_color[front_idx];
                auto new_it = back[x].find({front_val, front_idx});
                if (new_it != back[x].end()) {
                    back[x].erase(new_it);
                }
    		}
    		else {
    			ans.push_back(back_val);
                back[x].erase(it2);
                x = front_color[back_idx];
                auto new_it = front[x].find({back_val, back_idx});
                if (new_it != front[x].end()) {
                    front[x].erase(new_it);
                }
    		}
    	}        
    }

    for (int i = 0; i < m; i++) {
    	cout << ans[i] << (i == m - 1 ? "\n" : " ");
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