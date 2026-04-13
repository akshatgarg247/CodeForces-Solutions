// Author @25bce10693
// Uses array sort to make it easier
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long arr[4];
    long long count = 0;
    for (int i=0; i<4; i++) {
      cin >> arr[i];
    }  
    
    sort(arr, arr+4);
    for (int i=1; i<4; i++) {
      if (arr[i] == arr[i-1]) {
        count++;
      }
    }
    cout << count;
  return 0;
}
