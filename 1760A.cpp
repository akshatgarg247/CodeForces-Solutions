#include <bits/stdc++.h>
using namespace std;
// Used Bubble sorting
// Author @2025bce10693
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int arr[3];
    while (n--) {
      for (int i=0; i<3; i++) {
         cin >> arr[i];
      }
      
      for (int i=0; i<2; i++) {
        for (int j=0; j<3-i-1; j++) {
          if (arr[j] > arr[j+1]) {
          int temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
        }
      }
    }
    
    cout << arr[1] << endl;
    }
    return 0;
}
