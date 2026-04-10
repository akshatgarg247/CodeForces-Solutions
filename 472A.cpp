// Author @2025bce10693
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if (n%2 !=0) {
        cout << n-9 << " " << 9;
    } else {
        cout << n-8 << " " << 8;
    }
    return 0;
}
