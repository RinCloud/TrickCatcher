#include <bits/stdc++.h>

#define F first
#define S second
#define pb push_back
#define all(x) x.begin(), x.end()
#define SZ(x) (int)x.size()
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math")
//11:48

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

const int N = 200000 + 10;
const ll MOD = 1000000000 + 7;
const ll INF = 1000000010;
const ll LOG = 25;

int DP[N][2], n, x;
pii dp[N];
vi G[N];

void DFS(int v, int p = 0){
  if (G[v].size() == 1 & v != 1){
    DP[v][0] = 1;
    DP[v][1] = 0;
    return;
  }
  int res = 0;
  int ted = 0;
  for (auto u:G[v]){
    if (u == p) continue;
    ted++;
    DFS(u, v);
    res += min(DP[u][0], DP[u][1]);
  }
  DP[v][0] = res + (ted / 2 + (ted % 2));
  ted--;
  
  DP[v][1] = res + (ted / 2 + (ted % 2));
}

int Best(vi A){
  int pnt = A.size() - 1;
  int res = 0;
  for (int i = 0; i < A.size() / 2; i++){
    if (pnt <= i) break;
    while (pnt > i && A[pnt] + A[i] > x) pnt--;
    if (pnt == i) break;
    res++;
  }
  return res;
}

void DFS2(int v, int p = 0){
  if (G[v].size() == 1 && v != 1){
    dp[v] = {0, 0};
    return;
  }
  int sm = 0;
  vi num;
  for (auto u:G[v]){
    if (u == p) continue;
    DFS2(u, v);
    sm += dp[u].F;
    if (dp[u].S + 1 == x)sm++;
    else num.pb(dp[u].S + 1);
  }
  if (SZ(num) == 0){
    dp[v] = {sm, 0};
    return;
  }
  sort(all(num));
  int B = Best(num);
  dp[v] = {B + SZ(num) - 2 * B + sm, 0};
  vi GG;
  for (int i = 0; i < (int)num.size() - 1; i++){
    GG.pb(num[i]);
  }
  B = Best(GG);
  if (dp[v].F == sm + B + SZ(num) - 2 * B - 1){    
    return;
  }
  int l = -1, r = SZ(num) - 1;
  dp[v].F = sm + B + SZ(num) - 2 * B - 1;
  while (r - l > 1){
    int md = (l + r) >> 1;
    GG.clear();
    for (int i = 0; i < SZ(num); i++){
      if (i != md) GG.pb(num[i]);
    }
    int xx = Best(GG);
    if (dp[v].F == xx + sm + SZ(num) - 2 * B - 1) r = md;
    else l = md;
  }
  dp[v].S = num[r];
  if (dp[v].S == x) dp[v] = {dp[v].F + 1, 0}; 
}

int32_t main(){
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  cin >> n;
  for (int i = 0; i < n - 1; i++){
    int v, u;
    cin >> v >> u;
    G[v].pb(u), G[u].pb(v);
  }
  memset(DP, 31, sizeof DP);
  DFS(1);
  cout << DP[1][0] << ' ';
  int l = 0, r = n;
  while (r - l > 1){
    x = (l + r) >> 1;
    DFS2(1);
    if ((dp[1].F + (dp[1].S != 0) <= DP[1][0])) r = x;
    else l = x;
  }
  cout << r;
  return 0;
}