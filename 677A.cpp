#include <bits/stdc++.h>
using namespace std;
// Author @2025bce10693
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int n, h; cin >> n >> h;
    int arr[n];
    int count = 0;
    for (int i=0; i<n; i++) {
      cin >> arr[i];
    }
    
    for (int i=0; i<n; i++) {
      if (arr[i] > h) {
        count++;
      }
    }
    
    cout << n + count;
    
    
    return 0;
}
