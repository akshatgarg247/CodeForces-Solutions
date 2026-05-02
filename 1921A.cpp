#include <bits/stdc++.h>
using namespace std;
// Author @2025bce10693
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t; cin >> t;
    while (t--) {
      int arr[7];
      for (int i=0; i<8; i++) {
        cin >> arr[i];
      }
      int length;
      length = arr[0] - arr[2];
      if (length*length == 0) {
        length = arr[0] - arr[4];
      }
      cout << length*length << endl;
    }
    return 0;
}
