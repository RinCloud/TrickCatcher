#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, b, max = 0;
    cin >> n;
    vector<int> a(100001, 0); // Fixed the size of the array
    for(int i=0; i<n; i++) {
        cin >> b;
        a[b]++;
        a[b+1]++;
        if(b!=0) a[b-1]++;
        if(max < a[b]) max = a[b];
        if(max < a[b+1]) max = a[b+1];
        if(b != 0 && max < a[b-1]) max = a[b-1]; // Added if condition to check b != 0
    }
    cout << max << endl;
    return 0;
}