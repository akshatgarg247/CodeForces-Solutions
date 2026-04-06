// Author @2025bce10693
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, a;
    cin >> n;
 
    for (long long i=1; i<=n; i++) {
        if (i==1) {
            cout << 0 << "\n";
            
        } else if (i==2) {
            cout << 6 << "\n";
            
        } else {
            long long a = (i-2)*(i-1)*8/2;
            cout << i*i*(i*i-1)/2 - a << "\n";
        }
    }
    return 0;
}
