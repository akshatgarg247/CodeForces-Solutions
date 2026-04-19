// Author @25BCE10693

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int travel_time = 240;
    int time = 0;
    int count = 0;
    for (int i=1; i<=n; i++) {
      time = time + 5*i;
      if (time + k - travel_time <= 0) {
        count++;
      } 
    }
    cout << count;
    return 0;
}
