#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

struct Vertex {
    int A;
    int B;
};

struct Edge {
    int u;
    int v;
};

int findSmallestInitialAmount(int N, int M, const vector<Vertex>& vertices, const vector<Edge>& edges) {
    // Create adjacency list representation of the graph
    vector<vector<int>> adjList(N + 1);
    for (const auto& edge : edges) {
        adjList[edge.u].push_back(edge.v);
        adjList[edge.v].push_back(edge.u);
    }
    
    // Initialize the minimum initial amount of money required for each vertex
    vector<long long> minInitialAmount(N + 1, numeric_limits<long long>::max());
    
    // Perform BFS starting from vertex 1
    queue<int> Q;
    Q.push(1);
    minInitialAmount[1] = vertices[1].A;
    
    while (!Q.empty()) {
        int u = Q.front();
        Q.pop();
        
        for (int v : adjList[u]) {
            if (minInitialAmount[u] >= vertices[v].A) {
                // Update the minimum initial amount for vertex v if it is smaller than the current value
                minInitialAmount[v] = min(minInitialAmount[v], minInitialAmount[u]);
                
                // If the new minimum initial amount is different from the previous value, add vertex v to the queue for further processing
                if (minInitialAmount[v] != minInitialAmount[u]) {
                    Q.push(v);
                }
            }
        }
        
        // Donate money to vertex u
        minInitialAmount[u] += vertices[u].B;
        
        // Ensure that the amount of money in the pocket is at least 0
        minInitialAmount[u] = max(minInitialAmount[u], 0LL);
    }
    
    return minInitialAmount[N];
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<Vertex> vertices(N + 1);
    for (int i = 1; i <= N; ++i) {
        cin >> vertices[i].A >> vertices[i].B;
    }
    
    vector<Edge> edges(M);
    for (int i = 0; i < M; ++i) {
        cin >> edges[i].u >> edges[i].v;
    }
    
    int result = findSmallestInitialAmount(N, M, vertices, edges);
    cout << result << endl;
    
    return 0;
}