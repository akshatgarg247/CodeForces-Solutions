#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--) {
        int arr[7];
        int sum = 0;
        int min = -100;
    
        for (int i = 0; i<7; i++) {
            cin >> arr[i];
            sum += arr[i];
            min = max(min, arr[i]);
            
        }
        
        int outcome = -sum +2*min;
        cout << outcome << "\n";
    }

    
    
    return 0;
}
