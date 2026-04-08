// Author @2025bce10693
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    string species[105], colors[105];
    int count = 0;
    for (int i=0; i<n; i++) {
        cin >> species[i] >> colors[i];
    }
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<i; j++) {
            if (species[i] == species[j] && colors[i] == colors[j]) {
                count++;
                break;
            }
        }
    }
    
    if (n > count) {
    cout << n-count;
    } else {
        cout << n-count +1;
    }
    
    
    

    return 0;
}
