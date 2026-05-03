#include <bits/stdc++.h>
using namespace std;
// Author @2025bce10693
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t; cin >> t;
    while (t--) {
      int n, k; cin >> n >> k;
      int arr[n];
      for (int i=0; i<n; i++) {
        cin >> arr[i];
      }
      
      int temp_arr[n];
      for (int i=0; i<n; i++) {
        temp_arr[i] = arr[i];
      }
      

      for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
          if (temp_arr[j] > temp_arr[j+1]) {
            int temp = temp_arr[j];
            temp_arr[j] = temp_arr[j+1];
            temp_arr[j+1] = temp;
          }
        }
      }
      
      int count = 0;
      
      for (int i=0; i<n; i++) {
        if (temp_arr[i] == arr[i]) {
          count++;
        }
      }
      
      if ( count == n || k > 1) {
        cout << "YES\n";
      } else {
        cout << "NO\n";
      }
      
      
    }
    return 0;
}
