#include <bits/stdc++.h>
using namespace std;
// Used an implemented method as i couldnt figure out how to cout using string indexing.
// Author @2025bce10693
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    while (n--) {
    int a; cin >> a;
    int subtract = a % 10;
    int first_term = (a - subtract)/10;
    cout << first_term + subtract << endl;
    }
    return 0;
}
