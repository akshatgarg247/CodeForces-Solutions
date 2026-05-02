#include <bits/stdc++.h>
using namespace std;
// Author @2025bce10693
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int n; cin >> n;
    int current = 0;
    int max_cap = 0;
    for (int i=0; i<n; i++) {
      int a, b; cin >> a >> b;
      current -=a;
      current +=b;
      if (current > max_cap) {
        max_cap = current;
      }
    }
      cout << max_cap << endl;
    return 0;
}
