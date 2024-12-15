#include <iostream>
#include <vector>
#include <set>
using namespace std;

// Function to count the number of ways to paint the edges
int countWays(int N, vector<pair<int, int>> edges, int M, vector<pair<int, int>> restrictions) {
    // Create adjacency list to represent the tree
    vector<set<int>> adjList(N + 1);
    for (auto edge : edges) {
        int u = edge.first;
        int v = edge.second;
        adjList[u].insert(v);
        adjList[v].insert(u);
    }

    // Function to perform DFS from a vertex and count the number of ways to paint the edges
    function<int(int, int, set<int>&)> dfs = [&](int u, int parent, set<int>& blackEdges) {
        int ways = 1; // Initialize the number of ways to 1

        // Check if the current edge is restricted and add it to the set of black edges
        for (auto restriction : restrictions) {
            int u_restrict = restriction.first;
            int v_restrict = restriction.second;
            if (u == u_restrict && blackEdges.find(v_restrict) == blackEdges.end()) {
                blackEdges.insert(v_restrict);
            } else if (u == v_restrict && blackEdges.find(u_restrict) == blackEdges.end()) {
                blackEdges.insert(u_restrict);
            }
        }

        // Iterate through the neighbors of the current vertex
        for (int v : adjList[u]) {
            if (v != parent) {
                // Check if the edge is already painted black
                if (blackEdges.find(v) != blackEdges.end()) {
                    // If the edge is painted black, continue with the next neighbor
                    continue;
                }

                // Perform DFS on the next neighbor
                ways *= dfs(v, u, blackEdges);
            }
        }

        return ways;
    };

    // Initialize the set of black edges as empty
    set<int> blackEdges;

    // Perform DFS starting from vertex 1
    int totalWays = dfs(1, -1, blackEdges);

    return totalWays;
}

int main() {
    int N;
    cin >> N;

    // Read the edges of the tree
    vector<pair<int, int>> edges(N - 1);
    for (int i = 0; i < N - 1; i++) {
        cin >> edges[i].first >> edges[i].second;
    }

    int M;
    cin >> M;

    // Read the restrictions
    vector<pair<int, int>> restrictions(M);
    for (int i = 0; i < M; i++) {
        cin >> restrictions[i].first >> restrictions[i].second;
    }

    // Count the number of ways to paint the edges
    int numWays = countWays(N, edges, M, restrictions);

    // Print the result
    cout << numWays << endl;

    return 0;
}