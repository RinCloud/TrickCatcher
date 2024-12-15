#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

const int INF = INT_MAX;

struct Edge {
    int u, v, cost;
};

int N, M;
vector<Edge> edges;
vector<vector<int>> dp;

// Function to solve the problem using dynamic programming
int solve(int mask, int pos) {
    // Base case: reached the destination node N
    if (pos == N) {
        // If all edges have been removed and reached the destination, return 0
        if (mask == 0) {
            return 0;
        }
        // Otherwise, return the maximum cost
        return INF;
    }
    
    // If the subproblem has already been solved, return the result
    if (dp[mask][pos] != -1) {
        return dp[mask][pos];
    }
    
    // Initialize the result with infinity
    int result = INF;
    
    // Iterate over all the edges and try removing them
    for (int i = 0; i < M; i++) {
        if ((mask & (1 << i)) == 0) {
            Edge& e = edges[i];
            
            // If the edge connects the current position to the next position
            if (e.u == pos) {
                // Try removing the edge and proceed to the next position
                result = min(result, e.cost + solve(mask | (1 << i), e.v));
            }
            
            // If the edge connects the next position to the current position
            if (e.v == pos) {
                // Try removing the edge and proceed to the next position
                result = min(result, e.cost + solve(mask | (1 << i), e.u));
            }
        }
    }
    
    // Cache the result for memoization
    dp[mask][pos] = result;
    
    return result;
}

int main() {
    // Read the inputs
    cin >> N >> M;
    edges.resize(M);
    for (int i = 0; i < M; i++) {
        int u, v, cost;
        cin >> u >> v >> cost;
        edges[i] = {u, v, cost};
    }
    
    // Initialize the dp table with -1
    dp.assign(1 << M, vector<int>(N + 1, -1));
    
    // Solve the problem using dynamic programming
    int result = solve(0, 1);
    
    // Print the minimum budget needed to achieve the goal
    cout << result << endl;
    
    return 0;
}