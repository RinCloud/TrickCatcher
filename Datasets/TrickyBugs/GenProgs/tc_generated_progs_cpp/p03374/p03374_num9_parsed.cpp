#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> x(n+1), w(n+1), v(n+1), rv(n+1), s(n+1), u(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i] >> w[i];
        v[i] = v[i - 1] + w[i];
        s[i] = max(s[i - 1], v[i] - x[i]);
    }
    for (int i = n; i >= 1; i--)
    {
        rv[i] = rv[i + 1] + w[i];
        u[i] = max(u[i + 1], rv[i] - m + x[i]);
    }
    ll maxx = 0;
    for(int i=0; i<=n;i++){
        maxx = max(maxx, v[i] - x[i] + u[i + 1]);
        maxx = max(maxx, rv[i] - 2 * (m - x[i]) + s[i - 1]);
        maxx = max(maxx, s[i]);
        
    }
    cout << maxx << "\n";
    return 0;
}
