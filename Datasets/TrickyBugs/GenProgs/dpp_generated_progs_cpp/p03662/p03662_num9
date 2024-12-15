#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adjList;
vector<bool> visited;

int dfs(int node, int parent, int numBlack) {
    visited[node] = true;
    int count = numBlack;

    for (int next : adjList[node]) {
        if (!visited[next]) {
            int nextCount = dfs(next, node, numBlack + 1);
            count += nextCount;
        }
    }

    return count;
}

int main() {
    int N;
    cin >> N;

    adjList.resize(N + 1);
    visited.resize(N + 1, false);

    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    int totalBlack = dfs(1, -1, 1);

    if (totalBlack > N - totalBlack) {
        cout << "Fennec" << endl;
    } else {
        cout << "Snuke" << endl;
    }

    return 0;
}