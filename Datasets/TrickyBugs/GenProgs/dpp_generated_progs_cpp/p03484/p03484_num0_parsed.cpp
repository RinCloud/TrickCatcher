#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

typedef pair<int, int> pii;

/**
 * Function to calculate the depth of the tree.
 * @param graph: adjacency list representing the graph
 * @param root: root of the tree
 * @return depth: depth of the tree
 */
int calculateDepth(vector<vector<int>>& graph, int root) {
    queue<pii> q;
    vector<bool> visited(graph.size(), false);
    q.push({root, 0});
    visited[root] = true;
    int depth = 0;

    while (!q.empty()) {
        pii curr = q.front();
        q.pop();
        depth = curr.second;

        for (int child : graph[curr.first]) {
            if (!visited[child]) {
                q.push({child, curr.second + 1});
                visited[child] = true;
            }
        }
    }

    return depth;
}

/**
 * Function to check if the graph is a tree.
 * @param graph: adjacency list representing the graph
 * @return true if the graph is a tree, false otherwise
 */
bool isTree(vector<vector<int>>& graph) {
    int n = graph.size();
    int numEdges = 0;

    for (int i = 0; i < n; i++) {
        numEdges += graph[i].size();
    }

    numEdges /= 2; // since each edge is counted twice

    return numEdges == n - 1;
}

/**
 * Function to find the lexicographically smallest pair (A, B) to create a Christmas Tree.
 * @param graph: adjacency list representing the graph
 * @return lexicographically smallest pair (A, B)
 */
pii findSmallestChristmasTree(vector<vector<int>>& graph) {
    int n = graph.size();

    if (!isTree(graph)) {
        return {-1, -1}; // Not a tree, return invalid pair
    }

    int minA = n - 1; // Minimum A is (N - 1), when each edge is a separate path
    int minB = 0; // Minimum B is 0, when each path has only one vertex

    for (int i = 0; i < n; i++) {
        int depth = calculateDepth(graph, i);
        minB = max(minB, depth);
    }

    return {minA, minB};
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> graph(n);

    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        a--; // 0-indexed
        b--; // 0-indexed
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    pii result = findSmallestChristmasTree(graph);
    cout << result.first << " " << result.second << endl;

    return 0;
}