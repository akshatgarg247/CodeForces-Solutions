#include <bits/stdc++.h>
using namespace std;
// Author @2025bce10693
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    int arr[t];
    int count = 0;
    for (int i=0; i<t; i++) {
      cin >> arr[i];
    }
    
    int max = arr[0];
    int min = arr[0];
    for (int i=1; i<t; i++) {
      if (arr[i] > max) {
        count++;
        max = arr[i];
      } else if (arr[i] < min) {
        count++;
        min = arr[i];
      }
    }
    
    cout << count;
  return 0;
}


