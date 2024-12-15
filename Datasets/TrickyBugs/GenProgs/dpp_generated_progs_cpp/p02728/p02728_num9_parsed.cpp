#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

vector<vector<int>> adjList;
vector<bool> visited;
vector<long long> ways;

// Function to perform DFS
void dfs(int node) {
  visited[node] = true;
  for(int child : adjList[node]) {
    if(!visited[child]) {
      dfs(child);
      ways[node] = (ways[node] * ways[child]) % MOD;
    }
  }
}

int main() {
  int N;
  cin >> N;
  
  // Initialize adjacency list
  adjList.resize(N + 1);
  
  // Read the edges of the tree
  for(int i = 0; i < N - 1; i++) {
    int a, b;
    cin >> a >> b;
    adjList[a].push_back(b);
    adjList[b].push_back(a);
  }
  
  // Initialize visited and ways arrays
  visited.assign(N + 1, false);
  ways.assign(N + 1, 1);
  
  // Perform DFS from each node
  for(int node = 1; node <= N; node++) {
    if(!visited[node]) {
      dfs(node);
    }
  }
  
  // Print the answers
  for(int k = 1; k <= N; k++) {
    cout << ways[k] << endl;
  }
  
  return 0;
}