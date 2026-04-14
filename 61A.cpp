// Author @25bce10693

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s, t;
    cin >> s;
    cin >> t;
    for (int i=0; i<s.length(); i++) {
      if (s[i] == t[i]) {
        cout << 0;
      } else {
        cout << 1;
      }
    }
    
    return 0;
}
