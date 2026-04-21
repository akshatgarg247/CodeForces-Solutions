#include <bits/stdc++.h>
using namespace std;
// Author @2025bce10693
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
      char s;
      cin >> s;
      if (s == 'c' || s == 'o' || s == 'd' || s == 'e' || s == 'f' || s == 'r' || s == 's') {
        cout << "YES\n";
      } else {
        cout << "NO\n";
      }
    }
    
  return 0;
}
