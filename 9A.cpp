// Author @2025bce10693
 
#include <bits/stdc++.h>
using namespace std;

// This solution is a very brute forced shameful solution so dont judge me lol

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int y, w;
    cin >> y >> w;
    int count = 0;
    int a = max(w,y);
    int b = 7-a;
    if (b==0) {
        cout << "0/1";
        
    } else if (b==1) {
        cout << "1/6";
    } else if (b==2) {
        cout << "1/3";
    } else if (b==3) {
        cout << "1/2";
    } else if (b==4) {
        cout << "2/3";
    } else if (b==5) {
        cout << "5/6";
    } else {
        cout << "1/1";
    }

    return 0;
}
