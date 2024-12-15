#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;

struct Node {
  int id;
  vector<int> children;
};

int dfs(vector<Node>& tree, int u, int parent) {
  int leaves = 0;
  for (int v : tree[u].children) {
    if (v != parent) {
      leaves += dfs(tree, v, u);
    }
  }
  if (leaves == 0) {
    return 1;
  } else {
    return leaves;
  }
}

int main() {
  int N;
  cin >> N;
  
  vector<Node> tree(N + 1);
  for (int i = 0; i < N - 1; i++) {
    int a, b;
    cin >> a >> b;
    tree[a].children.push_back(b);
    tree[b].children.push_back(a);
  }
  
  int colorfulness = N;
  int min_leaves = N;
  
  for (int i = 1; i <= N; i++) {
    int leaves = dfs(tree, i, 0);
    int max_color = max(leaves, N - leaves);
    if (max_color < colorfulness) {
      colorfulness = max_color;
      min_leaves = leaves;
    }
  }
  
  cout << colorfulness << " " << min_leaves << endl;
  
  return 0;
}