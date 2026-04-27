#include <bits/stdc++.h>
using namespace std;
// Author @2025bce10693
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    long long a; cin >> a;
    while (a--) {
      long long count = 0;
      long long n; cin >> n;
      long long arr[n];
      for (long long i=0; i<n; i++) {
        cin >> arr[i];
      }
      
      for (long long i=0; i<n; i++) {
        count = count + arr[i];
      }
      
      long long root = sqrt(count);
      if (root*root == count) {
        cout << "YES\n";
      } else {
        cout << "NO\n";
      }
    }
}


