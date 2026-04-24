#include <bits/stdc++.h>
using namespace std;
// Author @2025bce10693
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
      string s;
      for (int i=0; i<5; i++) {
        cin >> s[i];
      }
      int countA = 0;
      int countB = 0;
      
      for (int i=0; i<5; i++) {
        if (s[i] == 'A') {
          countA++;
        } else {
          countB++;
        }
      }
      if (countA > countB) {
        cout << "A\n";
      } else {
        cout << "B\n";
      }
    }
  return 0;
}


