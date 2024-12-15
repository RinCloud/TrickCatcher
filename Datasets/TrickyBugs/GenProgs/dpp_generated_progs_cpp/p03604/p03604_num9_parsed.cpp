#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

const int mod = 1000000007;

struct DisjointSet {
  vector<int> parent;
  vector<int> rank;

  DisjointSet(int n) {
    parent.resize(n);
    rank.resize(n);
    for (int i = 0; i < n; i++) {
      parent[i] = i;
      rank[i] = 0;
    }
  }

  int find(int x) {
    if (parent[x] != x) {
      parent[x] = find(parent[x]);
    }
    return parent[x];
  }

  void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if (x == y) {
      return;
    }
    if (rank[x] < rank[y]) {
      parent[x] = y;
    } else {
      parent[y] = x;
      if (rank[x] == rank[y]) {
        rank[x]++;
      }
    }
  }
};

int main() {
  int N;
  cin >> N;

  vector<pair<int,int>> ball(2 * N);
  for (int i = 0; i < 2 * N; i++) {
    cin >> ball[i].first >> ball[i].second;
    ball[i].first--;
    ball[i].second--;
  }

  DisjointSet dsu(2 * N);
  for (int i = 0; i < 2 * N; i++) {
    dsu.unite(i, 2 * N + ball[i].first);
  }

  map<int, int> comp_size;
  for (int i = 0; i < 2 * N; i++) {
    comp_size[dsu.find(i)]++;
  }

  vector<long long> fact(N + 1);
  fact[0] = 1;
  for (int i = 1; i <= N; i++) {
    fact[i] = (fact[i - 1] * i) % mod;
  }

  long long ans = fact[N];
  for (auto& p : comp_size) {
    ans = (ans * fact[p.second]) % mod;
  }

  cout << ans << endl;

  return 0;
}