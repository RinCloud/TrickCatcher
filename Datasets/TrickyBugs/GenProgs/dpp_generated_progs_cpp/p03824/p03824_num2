#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[100001];
vector<int> result(100001, 0);

void dfs(int u, int p, int depth) {
  result[u] = depth;

  for (int v : adj[u]) {
    if (v != p) {
      dfs(v, u, depth + 1);
    }
  }
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

  dfs(1, -1, 0);

  int max_depth = 0;
  for (int i = 1; i <= N; i++) {
    max_depth = max(max_depth, result[i]);
  }

  cout << max_depth << endl;

  return 0;
}