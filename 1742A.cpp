// Author @25bce10693

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--) {
      int a, b, c; cin >> a >> b >> c;
      if (a+b==c || a+c==b || b+c==a) {
        cout << "YES\n";
      } else {
        cout << "NO\n";
      }
    }
    return 0;
}
