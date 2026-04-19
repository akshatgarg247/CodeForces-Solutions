#include <bits/stdc++.h>
using namespace std;

// Author @2025bce10693
// Loops backwards 
// Uses Bubble Sort
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
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
    int count2 = 0;
    for (int i=n-1; i>=0; i = i-2) {
      count = count + arr[i];
    }
    
    for (int i=n-2; i>=0; i = i-2) {
      count2 = count2 + arr[i];
    }
    
    cout << count << " " << count2;
    return 0;
}
