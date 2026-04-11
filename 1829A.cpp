// Author @2025bce10693
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    string a = "codeforces";
    int count = 0;
    while (t--) {
        string s;
        cin >> s;
        for (int i=0; i<10; i++) {
            if (s[i] != a[i]) {
                count++;
            }
        }
        cout << count << "\n";
        count = 0;
    }
    
    return 0;
}
