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
      int length = s.length();
      if (length == 1) {
        cout << "NO\n";
        continue;
      }
      int count = 0;
      int half = length/2;
      if (length % 2 == 0) {
        for (int i=0; i<half; i++) {
          if (s[i] == s[i+half]) {
            count++;
          }
          
        }
      }
      if (count == half) {
        cout << "YES\n";
      } else {
        cout << "NO\n";
      }
    }
  return 0;
}


