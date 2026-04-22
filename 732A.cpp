#include <bits/stdc++.h>
using namespace std;
// Author @2025bce10693
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int k, r; cin >> k >> r;
    for (int n=1; n<=10; n++) {
      int lastdigit = (n*k) % 10;
      if (lastdigit == 0 || lastdigit == r) {
        cout << n << endl;
        break;
      }
    }
  return 0;
}

