// Author @2025bce10693
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s, t;
    while(n--) {
        cin >> s >> t;
        char temp;
        temp = s[0];
        s[0] = t[0];
        t[0] = temp;
        cout << s << " " << t << "\n";
    }
    return 0;
}
