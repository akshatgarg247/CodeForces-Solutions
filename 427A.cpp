// Author @25bce10693

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, x;
    cin >> n;
    int crimes = 0;
    int count = 0;
    for (int i=0; i<n; i++) {
      cin >> x;
      if (x==-1) {
        if (count > 0) {
          count--;
        } else {
          crimes++;
        }
      } else {
        count += x;
      }
    }
    
    cout << crimes << endl;
    return 0;
}
