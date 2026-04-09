// Author @2025bce10693
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        if (i%2==0) {
            cout << "I love ";
            
        } else {
            cout << "I hate ";
        }
        
        if (i==n) {
            cout << "it ";
        } else {
            cout << "that ";
        }
    }
    return 0;
}
