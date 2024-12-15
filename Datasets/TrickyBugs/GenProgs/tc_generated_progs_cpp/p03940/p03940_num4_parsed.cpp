#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MAXN = 100010;

int n, T, E;
int a[MAXN];
ll ans, f[MAXN], g[MAXN];
pair<int, ll> q[MAXN];

int main(){
    scanf("%d%d%d", &n, &E, &T);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    f[0] = 0;
    int j = 1;
    a[n + 1] = E;
    int t = 1, w = 0;

    for (int i = 1; i <= n; i++){
        while (j + 1 <= i && (a[i] - a[j + 1]) * 2 >= T)
            j++;
        if ((a[i] - a[j]) * 2 >= T)
            f[i] = max(f[i], (a[i + 1] - a[i]) * 2 + g[j - 1]);
        while (t <= w && (a[i] - a[q[t].first]) * 2 >= T)
            t++;
        while (t <= w && q[w].second <= f[i - 1] - a[i] * 2)
            w--;
        q[++w] = make_pair(i, f[i - 1] - a[i] * 2);
        if (t <= w)
            f[i] = max(f[i], q[t].second + 2 * a[i] + 2 * (a[i + 1] - a[i]) - T);
        g[i] = max(g[i - 1], f[i]);
    }
    ans = (ll)3 * E - f[n] - 2 * a[1];
    cout << ans << endl;
    return 0;
}
