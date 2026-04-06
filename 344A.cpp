// Author @2025bce10693

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int arr[1000000];
    int count = 1;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for (int i=0; i<n-1; i++) {
        if (arr[i] != arr[i+1]) {
            count++;
        }
    }
    
    cout << count;
    return 0;
}
