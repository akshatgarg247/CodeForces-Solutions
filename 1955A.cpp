#include <bits/stdc++.h>
using namespace std;
// Author @2025bce10693
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t; cin >> t;
    while (t--) {
      int n, a, b; cin >> n >> a >> b;
      if (n % 2 == 0) {
        if (n/2 * b <a*n) {
          cout << n/2 * b << endl;
        } else {
          cout << a*n << endl;
        }
      } else {
        if (n/2 * b + a < a*n) {
          cout << n/2*b+a << endl;
        } else {
          cout << a*n << endl;
        }
      }
    }
    return 0;
}


