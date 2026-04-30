#include <bits/stdc++.h>
using namespace std;
// Author @2025bce10693
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t; cin >> t;
    while (t--) {
      int n; cin >> n;
      int doub = 2*n;
      int arr[doub];
      int count = 0;
      for (int i=0; i<doub; i++) {
        cin >> arr[i];
      }
      
      for (int i=0; i<doub; i++) {
        if (arr[i] % 2 == 1) {
          count++;
        }
      }
      
      if (count == n) {
        cout << "YES\n";
      } else {
        cout << "NO\n";
      }
    }
    return 0;
}


