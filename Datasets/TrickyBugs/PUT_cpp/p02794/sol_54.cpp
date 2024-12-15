#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 100000;
struct edge {int to, label;};
//隣接リスト
vector<edge> G[50];

bool dfs(int v, int p, int target, ll &path) {
  if (v == target) {
    return true;
  }
  for (int i; i < G[v].size(); i++) {
    edge e = G[v][i];
    if (e.to == p) continue;
    if (dfs(e.to, v, target, path)) {
      path |= (1LL << e.label);
      return true;
    }
  }
  return false;
}

int main() {
  int N;
  cin >> N;
  
  for (int i = 0; i < N-1; i++) {
    int a, b;
    cin >> a >> b; a--; b--;
    G[a].push_back({b, i});
    G[b].push_back({a, i});
  }
  
  //path[i] はi番目のpathに含まれる辺たちを記録
  int M;
  cin >> M;
  
  ll path[M];
  for (int i = 0; i < M; i++) {
    path[i] = 0;
  }
  
  for (int i = 0; i < M; i++) {
    int u, v; cin >> u >> v; u--; v--;
    dfs(u, -1, v, path[i]);
  }
  
  //共通部分はor演算で求まる
  ll bits;
  ll ans = 0;
  
  for (bits = 0; bits < (1LL << M); bits++) {
    ll val = 0;
    for (int i = 0; i < M; i++) {
      if (bits & (1LL << i)) {val |= path[i];}
    }
    int c = __builtin_popcountll(val);
    int b = __builtin_popcountll(bits);
    if (b % 2 == 1) { ans -= 1LL<<(N-1-c); }
    else { ans += 1LL<<(N-1-c); }
  }
  cout << ans << endl;
}
