// Author @2025bce10693
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr+n);
    
    int mx = arr[n-1];
    int count = 0;
    for (int i=0; i<n; i++) {
        if (arr[i] < mx) {
            count = count + mx - arr[i];
        }
    }
    
    cout << count;
    return 0;
}
