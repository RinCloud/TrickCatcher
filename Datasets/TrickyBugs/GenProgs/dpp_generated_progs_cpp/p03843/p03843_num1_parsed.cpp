#include<bits/stdc++.h>
using namespace std;
 
// Function to perform Depth First Traversal on tree to find
// the number of vertices of each color after the operation
void dfs(vector<int> adj[], int v, int d, vector<bool>& visited,
         vector<int>& color_count, vector<int>& color,
         vector<int>& favorite)
{
    visited[v] = true;
 
    // Increment the count of the current vertex's color
    color_count[color[v]]++;
 
    // If the current vertex is a favorite vertex, paint
    // the vertices at distance <= d with its color
    if (favorite[v])
    {
        for (int i = 1; i <= d; i++)
            color_count[color[v] - i]++;
    }
 
    // Traverse the adjacent vertices
    for (int i = 0; i < adj[v].size(); i++)
    {
        int u = adj[v][i];
 
        // If the adjacent vertex is not visited, perform
        // DFS on it
        if (!visited[u])
            dfs(adj, u, d, visited, color_count, color, favorite);
    }
}
 
// Function to find the number of possible combinations
// of colors of vertices after the operation
int possibleCombinations(vector<int> adj[], vector<int>& color,
                        vector<int>& favorite, int d)
{
    int n = color.size();
    vector<int> color_count(n + 1, 0);
    vector<bool> visited(n + 1, false);
 
    // Perform DFS on the tree
    dfs(adj, 1, d, visited, color_count, color, favorite);
 
    // Find the total number of combinations
    int combinations = 0;
    for (int i = 1; i <= n; i++)
    {
        int cnt = color_count[i];
        combinations += (cnt * (cnt + 1)) / 2;
    }
 
    return combinations;
}
 
// Driver code
int main()
{
    int n;
    cin >> n;
 
    // Store the tree as an adjacency list
    vector<int> adj[n + 1];
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    // Store the favorite vertices
    string s;
    cin >> s;
    vector<int> favorite(n + 1, 0);
    for (int i = 0; i < n; i++)
        favorite[i + 1] = s[i] - '0';
 
    // Assign colors to vertices
    vector<int> color(n + 1, 0);
    for (int i = 1; i <= n; i++)
        color[i] = i;
 
    // Find the number of possible combinations of colors
    int ans = possibleCombinations(adj, color, favorite, n);
 
    cout << ans << endl;
     
    return 0;
}