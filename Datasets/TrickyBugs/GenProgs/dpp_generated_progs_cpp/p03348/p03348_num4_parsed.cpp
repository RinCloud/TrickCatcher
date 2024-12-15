#include <iostream>
#include <vector>
#include <set>
#include <queue>
using namespace std;

const int MAXN = 105;
vector<int> adj[MAXN];
int color[MAXN];

int dfs(int u, int p) {
  int children = 0;
  for (int v : adj[u]) {
    if (v != p) {
      children += dfs(v, u);
    }
  }
  if (children == 0) {
    color[u] = 1;
  }
  return children + 1;
}

int main() {
  int N;
  cin >> N;
  for (int i = 0; i < N - 1; i++) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  
  int colorfulness = 0;
  int numLeaves = 0;
  for (int i = 1; i <= N; i++) {
    if (color[i] == 0) {
      colorfulness++;
      numLeaves += dfs(i, -1);
    }
  }
  cout << colorfulness << ' ' << numLeaves << '\n';
  
  return 0;
}