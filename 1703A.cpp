// Author @25bce10693

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
  while (n--) {
    string s;
    cin >> s;
    if ((s[0] == 'Y' || s[0] == 'y') && (s[1] == 'E' || s[1] == 'e') && (s[2] == 'S' || s[2] == 's')) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
    
  }
    
  return 0;
}
