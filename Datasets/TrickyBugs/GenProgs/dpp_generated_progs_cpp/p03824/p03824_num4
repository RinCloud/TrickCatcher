#include <iostream>
#include <vector>
using namespace std;

vector<int> adjList[100001];
int depth[100001];

void dfs(int node, int parent, int d) {
    depth[node] = d;
    for (int child : adjList[node]) {
        if (child != parent) {
            dfs(child, node, d + 1);
        }
    }
}

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    dfs(1, -1, 0);
    int maxDepth = 0;
    for (int i = 1; i <= N; i++) {
        maxDepth = max(maxDepth, depth[i]);
    }
    int k = 0;
    while ((1 << k) < maxDepth) {
        k++;
    }
    cout << k << endl;
    return 0;
}