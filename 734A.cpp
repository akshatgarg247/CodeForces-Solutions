// Author @2025bce10693
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    string s;
    cin >> s;
    int countA = 0;
    int countD = 0;
    for (int i = 0; i<n; i++) {
        if (s[i] == 'A') {
            countA++;
        } else {
            countD++;
        }
        
    }
    
    if (countA>countD) {
        cout << "Anton";
    } else if (countA == countD) {
        cout << "Friendship";
    } else {
        cout << "Danik";
    }

    return 0;
}
