// Author @2025bce10693
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a >> b;
        cout << b-a << "\n";
    }
    return 0;
}
