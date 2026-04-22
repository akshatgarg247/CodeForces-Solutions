#include <bits/stdc++.h>
using namespace std;
// Author @2025bce10693
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
      long long x, y; cin >> x >> y;
      
      if (y / x == 2) {
        cout << "NO\n";
      } else {
        cout << "YES\n";
      }
    }
  return 0;
}
