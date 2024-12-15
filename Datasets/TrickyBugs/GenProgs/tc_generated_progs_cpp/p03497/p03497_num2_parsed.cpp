#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 50;
int n, k, a[N];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x]++;
    }
    sort(a + 1, a + n + 1, greater<int>());
    int ans = 0;
    for (int i = k + 1; i <= n; i++) {
        ans += a[i];
    }
    cout << ans;
}