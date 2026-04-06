// Author @2025bce10693
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    int count =0;
    cin >> s;
    for (int i=0; i<s.length(); i++) {
        if (s[i] == '4' || s[i] == '7') {
            count+=1;
        }   
    }
    
    if (count == 4) {
        cout << "YES\n";
        
        return 0;
    }
    
    if (count == 7) {
        cout << "YES\n";
        
        return 0;
    }
    
    cout << "NO\n";
    
    return 0;
}
