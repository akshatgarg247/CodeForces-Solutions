#include <bits/stdc++.h>
using namespace std;
// Author @2025bce10693
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t; cin >> t;
    while (t--) {
      int arr[2];
      for (int i=0; i<2; i++) {
        cin >> arr[i];
      }
      
      for (int i=0; i<2-1; i++) {
        for (int j=0; j<2-i-1; j++) {
          if (arr[j] > arr[j+1]) {
          int temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
          }
        } 
      }
      
      cout << arr[0] << " " << arr[1] << endl;
    }
    
  return 0;
}
