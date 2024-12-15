#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
 
static const double EPS = 1e-8;
static const double PI = 4.0 * atan(1.0);
static const double PI2 = 8.0 * atan(1.0);
 
#define REP(i,n)	for(int i=0;i<(int)n;++i)
#define ALL(c)		(c).begin(),(c).end()
#define CLEAR(v)	memset(v,0,sizeof(v))
#define MP(a,b)		make_pair((a),(b))
#define ABS(a)		((a)>0?(a):-(a))
#define FOR(i,s,n)	for(int i=s;i<(int)n;++i)
 
typedef pair<int, int> pii;
 
int n, a, b, x, y;
pair<pii, int> ps[100000];
 
int s;
vector<int> es[100000];
int deg[100000];
int imos[100001];
 
void conn(int u, int v) {
    es[u].push_back(v);
    es[v].push_back(u);
}
 
void solve() {
    CLEAR(imos);
    sort(ps, ps + n);
    REP(i, n) {
        int x = ps[i].first.first, y = ps[i].first.second, v = ps[i].second;
        pair<pii, int> pl = MP(MP(x + s, y - s + 1), 0), pu = MP(MP(x + s, y + s), n);
        int l = lower_bound(ps, ps + n, pl) - ps;
        int u = upper_bound(ps, ps + n, pu) - ps;
        if (u > l) {
            conn(v, ps[l].second);
            deg[v] += u - l;
            ++deg[ps[l].second];
            ++imos[l]; --imos[u - 1]; 
            // connect from index l, to index u - 1, l-(l+1)-(...)-(u-1)
            // use imos to reduce  loop
        }
    }
    REP(i, n) {
        if (imos[i] > 0) {
            deg[ps[i + 1].second] += imos[i];
            conn(ps[i].second, ps[i + 1].second);
        }
        imos[i + 1] += imos[i];
    }
}
 
bool used[100000];
 
int main(int argc, char **argv) {
    cin >> n >> a >> b;
    --a; --b;
    REP(i, n) {
        cin >> x >> y;
        ps[i].first = MP(x + y, x - y);
        ps[i].second = i;
        deg[i] = 0;
    }
    // after transform from a(x, y) to a'(x+y, x-y), 
    // distance(a, b) = |ax-bx|+|ay-by| = max(|a'x-b'x|,|a'y-b'y|) = distance'(a', b')
    // just image a line y = x
    // the transform is (x+yi) e^{\pi i/4} = (x+yi) (1+i) = (x-y) + (x+y)i 
    s = max(abs(ps[a].first.first - ps[b].first.first), abs(ps[a].first.second - ps[b].first.second));
 
    solve();
    REP(i, n) ps[i].first = MP(ps[i].first.second, -ps[i].first.first); // why `-` ?
    solve();
 
    // a simple bfs of connected component
    ll res = 0;
    queue<int> q;
    q.push(a);
    q.push(b);
    CLEAR(used);
    while (!q.empty()) {
        int v = q.front(); q.pop();
        if (used[v]) continue;
        used[v] = true;
        res += deg[v];
        REP(i, es[v].size()) q.push(es[v][i]);
    }
 
    cout << (res / 2) << endl;
 
    return 0;
}