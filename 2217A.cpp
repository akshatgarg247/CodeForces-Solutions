// Author @2025bce10693
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t,n,k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        long long s = 0;
        for (int i=0; i<n; i++) {
            int x;
            cin >> x;
            s +=x;
        }
        
        
        if (s%2==0 && n%2 == 1 && k%2 == 1) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
