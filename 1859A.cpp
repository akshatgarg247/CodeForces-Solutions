#include <bits/stdc++.h>
using namespace std;
// Author @2025bce10693
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t; cin >> t;
    while (t--) {
      int n; cin >> n;
      int a[n];
      for (int i =0; i<n; i++) {
        cin >> a[i];
      }
      sort(a, a+n);
      int count = 0;
      int max = a[n-1];
      for (int i=0; i<n-1; i++) {
        if (a[i] == max) {
          count++;
        }
      }
      
      if (a[n-1] == a[0]) {
        cout << -1 << endl;
      } else {
        cout << n-count-1 << " " << 1+count << endl;
      for (int i=0; i<n-count-1; i++) {
        cout << a[i] << " ";
      } cout << endl;
        for (int i=0; i<count+1; i++) {
        cout << a[n-1] << " ";
      } cout << endl;
      }
    }
    return 0;
}


