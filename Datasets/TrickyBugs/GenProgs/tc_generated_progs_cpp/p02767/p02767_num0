#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, b, x, y, i;
    cin >> n;
    ll a[n+1];  // <--- Increase size of array 'a' by 1 to accommodate all values
    b = 0;
    for(i = 1; i <= n; i++) {
        cin >> a[i];
        b += a[i];
    }
    b = (b + n - 1) / n;  // <--- Round up the average
    x = 0;
    y = 0;
    for(i = 1; i <= n; i++) {
        x += (a[i] - b) * (a[i] - b);
        y += (a[i] - b - 1) * (a[i] - b - 1);
    }
    cout << min(x, y);
    return 0;
}