#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    int steps = 0;
    int count = x/5;
        if (x%5 == 0) {
            cout << steps + count;
        } else {
            cout << steps + count + 1;
            
        }
    
    return 0;
}
