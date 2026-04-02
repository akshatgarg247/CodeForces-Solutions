#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int arr[100];
    for (int i=0; i < x; i++) {
        cin >> arr[i];
        
    }
    
    int threshold = arr[y-1];
    int count = 0;
    for (int i=0; i<x; i++) {
        if (arr[i] >= threshold && arr[i] > 0) {
            count++;
        }
        
    }
    
    cout << count;
    return 0;
}
