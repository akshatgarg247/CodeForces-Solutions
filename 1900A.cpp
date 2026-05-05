#include <bits/stdc++.h>
using namespace std;
// Author @2025bce10693
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    long long t; cin >> t;
    while (t--) {
      long long n; cin >> n;
      string s;
      cin >> s;
      
      long long count = 0;
      long long count1 = 0;
      for (int i=1; i<n-1; i++) {
        if (s[i] == '.' && s[i+1] == '.' && s[i-1] == '.') {
          count++;
      }
        } for (int i=0; i<n; i++) {
          if (s[i] =='.') {
            count1++;
          }
        }
         if (count >= 1) {
           cout << 2 << endl;
         } else {
           cout << count1 << endl;
         }
          
        }
      
    return 0;
}
