#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, a, aa, ans = 0;
    cin >> n;
    cin >> aa;
    for (int i = 1; i < n; i++) {
        cin >> a;
        if (aa > a) {
            ans += aa - a;
        } else {
            aa = a;
        }
    }
    cout << ans;
    return 0;
}
