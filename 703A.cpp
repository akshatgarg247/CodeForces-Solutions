// Author @2025bce10693
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b;
    cin >> n;
    int m = 0;
    int c = 0;
    while (n--) {
        cin >> a >> b;
        if (a > b) {
            m++;
        } else if (b>a) {
            c++;
        }
    }
    
    if (m == c) {
        cout << "Friendship is magic!^^";
    } else if (m > c) {
        cout << "Mishka";
        
    } else {
        cout << "Chris";
    }
    
    return 0;
}
