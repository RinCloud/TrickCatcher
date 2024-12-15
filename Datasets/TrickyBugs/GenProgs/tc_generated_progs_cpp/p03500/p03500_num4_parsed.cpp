#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>

using namespace std;

typedef long long ll;

#define forn(i, n) for (int (i) = 0; (i) != (n); (i)++)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define popcount(x) __builtin_popcountll(x)

#ifdef LOCAL
#define dbg(x) cerr << __LINE__ << " " << #x << " " << x << endl
#define ln cerr << __LINE__ << endl
#else
#define dbg(x) void(0)
#define ln void(0)
#endif // LOCAL

const ll N = 210;
const ll MOD = 1e9 + 7;
ll n, k;
ll a[N];
ll ans;

ll optimal(ll l, ll r)
{
    ll x = (l ^ r);
    ll y = 0;
    for (int i = 61; i >= 0; i--)
    {
        if ((1ll << i) & x)
        {
            y = 2 * y + 1;
            break;
        }
        if ((1ll << i) & l) y = 2 * y + 1;
        else y = 2 * y;
    }
    return min(popcount(l), popcount(y));
}

signed main()
{
    #ifdef ONLINE_JUDGE
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    #endif // ONLINE_JUDGE
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    map<vector<ll>, vector<pair<ll, ll> > > mm;
    for (int j = 0; j <= 60; j++)
    {
        vector<ll> limits(n + 2);
        ll c = (1LL << j);
        limits[0] = -1;
        for (int i = 0; i < n; i++)
        {
            limits[i + 1] = a[i] % c;
        }
        limits[n + 1] = c;
        sort(all(limits));
        limits.resize(unique(all(limits)) - limits.begin());
        for (int i = 0; i + 1 < limits.size(); i++)
        {
            vector<ll> sc(n);
            forn(ii, n) sc[ii] = a[ii] / c - (a[ii] % c <= limits[i]);
            ll opers = k - j - optimal(limits[i] + 1, limits[i + 1]);
            if (opers < 0) continue;
            ll val = (1ll << 61);
            forn(ii, n) val = min(val, sc[ii]);
            if (val < 0) continue;
            dbg(val);
            opers = min(opers, val);
            ll R = a[0] / c;
            ll L = a[0] / c - opers;
            forn(ii, n) sc[ii] -= val;
            mm[sc].push_back({L, R});
        }
    }
    for (auto e : mm)
    {
        //for (auto x : e.first) cout << x << " ";
        //cout << ": ";
        vector<pair<ll, ll> > v = e.second;
        sort(all(v));
        ll ma = - (1ll << 61);
        for (int i = 0; i < v.size(); i++)
        {
            v[i].first = max(v[i].first, ma);
            ans = (ans + max(0ll, v[i].second - v[i].first + 1)) % MOD;
            ma = max(ma, v[i].second + 1);
        }
        //for (auto x : e.second) cout << "[" << x.first << " " << x.second << "] ";
        //cout << "\n";
    }
    cout << ans;

    return 0;
}
