#include <bits/stdc++.h>
using namespace std;
// Author @2025bce10693
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t; cin >> t;
    int x;
    while (t--) {
      int x; cin >> x;
      int mn = 9;
      while (x>0) {
        mn = min(mn, x%10);
        x=x/10;
      }
      cout << mn << endl;
    }
    return 0;
}
