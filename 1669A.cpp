#include <bits/stdc++.h>
using namespace std;

// Author @2025bce10693

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--) {
      int a;
      cin >> a;
      if (a>=1900) {
        cout << "Division 1\n";
      } else if (a>=1600 && a<=1899) {
        cout << "Division 2\n";
      } else if (a>=1400 && a<=1599) {
        cout << "Division 3\n";
      } else {
        cout << "Division 4\n";
      }
    }
    
    return 0;
}
