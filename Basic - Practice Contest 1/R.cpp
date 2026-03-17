#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int a, b; cin >> a >> b;
    if(a%2 == 1){
        cout << "NO\n";
    }
    else{
        if(a%2 == 0 and b%2 == 0){
            cout << "YES\n";
        }
        else{
            b %= 2;
            if(b == 1 and a >=2){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
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