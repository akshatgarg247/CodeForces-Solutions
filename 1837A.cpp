#include <bits/stdc++.h>
using namespace std;
// Author @2025bce10693
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t; cin >> t;
    int x, k;
    while (t--) {
      cin >> x >> k;
      if (x%k != 0) {
        cout << 1 << endl;
        cout << x << endl;
      } else {
        cout << 2 << endl;
        cout << 1 << " " << x-1 << endl;
      }
    }
    return 0;
}


