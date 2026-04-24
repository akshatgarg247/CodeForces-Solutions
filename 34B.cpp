#include <bits/stdc++.h>
using namespace std;
// Author @2025bce10693
// Uses simple sorting
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    int arr[n];
    for (int i=0; i<n; i++) {
      cin >> arr[i];
    }
    
    for (int i=0; i<n-1; i++) {
    for (int j=0; j<n-i-1; j++) {
      if (arr[j] > arr[j+1]) {
          int temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
      }
    }
  }
  
  int count = 0;
  for (int i=0; i<m; i++) {
    if (arr[i] < 0) {
    count = count - arr[i];
    }
  }
  
  cout << count;
  
  return 0;
}


