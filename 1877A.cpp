#include <bits/stdc++.h>
using namespace std;
// Author @2025bce10693
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t; cin >> t;
    while (t--) {
      int n; cin >> n;
      int minus = n-1;
      int arr[minus];
      for (int i=0; i<minus; i++) {
        cin >> arr[i];
      }
      
      int sum = 0;
      for (int i=0; i<minus; i++) {
        sum += arr[i];
      }
      
      cout << -1*sum << endl;
    }
    return 0;
}
