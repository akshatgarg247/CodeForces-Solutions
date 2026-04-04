#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n, m, a;
    cin >> n >> m >> a;
    
    long long tiles_n = (n+a-1)/a;
    long long tiles_m = (m+a-1)/a;
    cout << tiles_n * tiles_m;
    return 0;
}
