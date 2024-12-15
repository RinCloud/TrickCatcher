#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+7;
const int mod = 1e9+7;
ll a[N];
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    int n,k;cin>>n>>k;
    for(int i=1;i<=n;i++) {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    ll ans = 1;
    if (a[n] <= 0) {
        if (k % 2 == 1) {
            for (int i=n; i>n-k; i--) {
                ans = (ans*a[i]) % mod;
                ans = (ans + mod) % mod;
            }
        } else {
            for (int i=1; i<=k; i++) {
                ans = (ans*a[i]) % mod;
                ans = (ans + mod) % mod;
            }
        }
    } else if (a[1] >= 0) {
        for (int i=n; i>n-k; i--) {
            ans = (ans*a[i]) % mod;
            ans = (ans + mod) % mod;
        }
    } else {
        int l = 1, r = n;
        if (k % 2 == 1) {
            ans = (ans * a[n]) % mod;
            ans = (ans + mod) % mod;
            r--;
            k--;
        }
        while (k > 1) {
            ll lf = a[l]*a[l+1];
            ll rf = a[r]*a[r-1];
            if (lf > rf) {
                ans = (ans*lf) % mod;
                ans = (ans + mod) % mod;
                l += 2;
            } else {
                ans = (ans*rf) % mod;
                ans = (ans + mod) % mod;
                r -= 2;
            }
            k -= 2;
        }
        if (k == 1) {
            ans = (ans * a[l]) % mod;
            ans = (ans + mod) % mod;
        }
    }
    cout << ans << endl;
}
