// Author @2025bce10693
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int x;
        int current = 0, maximum = 0;
        
        for (int i=0; i<n; i++) {
            cin >> x;
            
            if (x==0) {
                current++;
                maximum = max(maximum, current);
            } else {
                current = 0;
            }
        }
        
        cout << maximum << "\n";
    }
    
    return 0;
}
