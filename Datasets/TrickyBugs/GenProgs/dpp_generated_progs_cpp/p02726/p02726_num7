#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to find shortest distance between two vertices in the graph
int shortestDistance(vector<vector<int>>& graph, int src, int dest, int N) {
    vector<int> dist(N + 1, -1);
    queue<int> q;
    
    dist[src] = 0;
    q.push(src);
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        
        for (int v : graph[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    
    return dist[dest];
}

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    
    vector<vector<int>> graph(N + 1);
    
    // Construct the graph
    for (int i = 1; i <= N - 1; i++) {
        graph[i].push_back(i + 1);
        graph[i + 1].push_back(i);
    }
    graph[X].push_back(Y);
    graph[Y].push_back(X);
    
    vector<int> result(N, 0);
    
    // Find the number of pairs of integers (i,j) such that the shortest distance between Vertex i and Vertex j is k
    for (int k = 1; k <= N - 1; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = i + 1; j <= N; j++) {
                if (shortestDistance(graph, i, j, N) == k) {
                    result[k]++;
                }
            }
        }
    }
    
    // Print the result
    for (int k = 1; k <= N - 1; k++) {
        cout << result[k] << endl;
    }
    
    return 0;
}