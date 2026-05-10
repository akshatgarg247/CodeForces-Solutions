#include <bits/stdc++.h>
using namespace std;
// Author @2025bce10693
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int n; cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) {
      cin >> arr[i];
    }
    
    sort(arr, arr+n);

    int count = 0;
    for (int i=0; i<n; i++) {
      if (arr[i] < 0) {
        count++;
      }
    }
    
    for (int i=0; i<count; i++) {
      arr[i] = -1*arr[i];
    }
    
    sort(arr, arr+n);

    int zero = 0;
    for (int i=0; i<n; i++) {
      if (arr[i] == 0) {
        zero++;
      }
    }
    
    if (zero > 0) {
      cout << 0;
    } else {
    cout << arr[0];
    }
    return 0;
}
