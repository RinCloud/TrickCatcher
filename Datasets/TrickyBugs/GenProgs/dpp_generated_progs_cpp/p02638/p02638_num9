#include <iostream>
#include <vector>

using namespace std;

int N, K, P;
vector<vector<int>> adj;
vector<bool> visited;
vector<vector<long long>> dp;

// Function to check if all six edges exist simultaneously
bool check(int a, int b, int c, int d)
{
    return (adj[a][b] && adj[b][c] && adj[c][a] && adj[a][d] && adj[b][d] && adj[c][d]);
}

// Function to calculate the number of directed graphs
long long calculate(int u, int k)
{
    // Base case
    if (k == 0)
        return 1;
    
    // If already calculated, return the value
    if (dp[u][k] != -1)
        return dp[u][k];
    
    // Calculate the number of directed graphs recursively
    long long res = 0;
    for (int v = 0; v < N; v++)
    {
        // Check if edge u->v is valid
        if (!visited[v] && !check(u, v, (u + 1) % N, (u + 2) % N))
        {
            visited[v] = true; // Mark vertex v as visited
            res = (res + calculate(v, k - 1)) % P; // Recursively calculate the number of directed graphs
            visited[v] = false; // Mark vertex v as not visited
        }
    }
    
    // Memoize the result and return
    return dp[u][k] = res;
}

int main()
{
    // Read the inputs
    cin >> N >> K >> P;
    
    // Initialize adjacency matrix and visited array
    adj.assign(N, vector<int>(N, 0));
    visited.assign(N, false);
    
    // Calculate the adjacency matrix
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i != j && (j - i + N) % N <= K)
                adj[i][j] = 1;
        }
    }
    
    // Initialize dynamic programming array with -1
    dp.assign(N, vector<long long>(K + 1, -1));
    
    // Calculate the number of directed graphs
    long long ans = 0;
    for (int u = 0; u < N; u++)
    {
        visited[u] = true; // Mark vertex u as visited
        ans = (ans + calculate(u, K - 1)) % P; // Recursively calculate the number of directed graphs
        visited[u] = false; // Mark vertex u as not visited
    }
    
    // Print the result
    cout << ans << endl;
    
    return 0;
}