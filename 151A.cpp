// Author @25bce10693

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int count1 = k*l/n;
    int count2 = c*d;
    int count3 = p/np;
    int answer = min(min(count1, count2), count3)/n;
    cout << answer;
    return 0;
}
