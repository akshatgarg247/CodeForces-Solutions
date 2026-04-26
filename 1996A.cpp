#include <bits/stdc++.h>
using namespace std;
// Author @2025bce10693
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t; cin >> t;
    while (t--) {
      int n; cin >> n;
      if ( n == 2 ) {
        cout << 1 << endl;
        
      } else if ( n % 4 == 0) {
        int quotient = n/4;
        cout << quotient << endl;
        
      } else if (n % 4 == 2) {
        int quotient2 = n/4;
        cout << quotient2 + 1 << endl; 
      }
    }
  return 0;
}


