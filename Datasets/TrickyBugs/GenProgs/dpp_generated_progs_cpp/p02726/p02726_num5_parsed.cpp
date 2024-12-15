#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to find the shortest path between two vertices in the graph
int shortestPath(vector<vector<int>>& graph, int start, int end) {
    int n = graph.size();

    vector<int> dist(n, INT_MAX);
    dist[start] = 0;

    queue<int> q;
    q.push(start);

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        for (int i = 0; i < graph[curr].size(); i++) {
            int neighbor = graph[curr][i];
            if (dist[neighbor] == INT_MAX) {
                dist[neighbor] = dist[curr] + 1;
                q.push(neighbor);
            }
        }
    }

    return dist[end];
}

// Function to calculate the number of pairs with shortest distance k
int countPairs(int n, int x, int y, int k) {
    vector<vector<int>> graph(n);

    // Adding edges between the vertices
    for (int i = 0; i < n - 1; i++) {
        graph[i].push_back(i + 1);
        graph[i + 1].push_back(i);
    }

    graph[x - 1].push_back(y - 1);
    graph[y - 1].push_back(x - 1);

    int count = 0;

    // Calculating shortest path for each pair of vertices
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int dist = shortestPath(graph, i, j);
            if (dist == k) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    // Calculating and printing the count of pairs for each k
    for (int k = 1; k < n; k++) {
        int pairs = countPairs(n, x, y, k);
        cout << pairs << endl;
    }

    return 0;
}