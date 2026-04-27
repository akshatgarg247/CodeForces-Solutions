#include <bits/stdc++.h>
using namespace std;
// Author @2025bce10693
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t; cin >> t;
    while (t--) {
      string s;
      cin >> s;
      if (s == "cab" || s == "bca") {
        cout << "NO\n";
      } else {
        cout << "YES\n";
      }
    }
    return 0;
}


