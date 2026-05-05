#include <bits/stdc++.h>
using namespace std;
// Author @2025bce10693
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t; cin >> t;
    while (t--) {
      int n; cin >> n;
      int add = n+1;
      int less = n-1;
      if (n==1) {
        cout << "First" << endl;
      } else if (add % 3 == 0 || less % 3 == 0) {
          cout << "First" << endl;        
        } else {
          cout << "Second" << endl;
        }
      }
    return 0;
}
