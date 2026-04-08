// Author @2025bce10693
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int q, n;
    cin >> q;
    string s;
    string t;
    while (q--) {
        cin >> n;
        cin >> s >> t;
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        if (s==t) {
            cout << "YES\n";
            
        } else {
            cout << "NO\n";
        }
    }
 
 
    return 0;
}
