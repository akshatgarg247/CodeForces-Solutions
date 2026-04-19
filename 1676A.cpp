#include <bits/stdc++.h>
using namespace std;

// Author @2025bce10693

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    while (n--) {
      string s;
      for (int i=0; i<6; i++) {
        cin >> s[i];
      }
      if ((s[0] + s[1] + s[2] == s[3] + s[4] + s[5])) {
        cout << "YES\n";
      } else {
        cout << "NO\n";
      }
    }
    return 0;
}
