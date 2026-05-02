#include <bits/stdc++.h>
using namespace std;
// Author @2025bce10693
// Uses Linear Search
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    int n; cin >> n;
    int arr[n];
    int count = 0;
    for (int i=0; i<n; i++) {
      cin >> arr[i];
    }
    
    for (int i=0; i<n; i++) {
      if (arr[i] == 1) {
        count++;
      }
    }
    
    if (count > 0) {
      cout << "HARD";
    } else {
      cout << "EASY";
    }
    
    retur
