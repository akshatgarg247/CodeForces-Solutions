// Author @2025bce10693
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin >> a >> b >> c;
        if (a+b >= 10 || b+c >= 10 || a+c >= 10) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
