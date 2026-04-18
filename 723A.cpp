// Author @25bce10693
// Uses Array Sort
// Used Bubble Sort here
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[3];
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
    
    cout << arr[2] - arr[0];
    return 0;
}
