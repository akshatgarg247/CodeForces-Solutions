#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[7000];
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        
        if (arr[i]==67) {
            cout << arr[i] << "\n";
        } else {
     
        cout << arr[i] +1 << "\n";
    }
    
    }
    return 0;
}
