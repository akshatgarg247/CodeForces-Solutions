#include <bits/stdc++.h>
using namespace std;
// Author @2025bce10693
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, k;
    cin >> t;
    while (t--) {
      cin >> n >> k;
      int count = 0;
      int arr[n];
      for (int i=0; i<n; i++) {
        cin >> arr[i];
        if (arr[i] == k) {
          count++;
        }
      }
      
      if (count > 0) {
          cout << "YES\n";
          } else {
            cout << "NO\n";
          }
    }
    return 0;
}
