#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adjList;
vector<bool> visited;
vector<int> color;

// Function to perform a DFS on the tree and assign colors
void dfs(int u, int p) {
    visited[u] = true;
    
    // Assign color 1 to the root
    if (p == -1)
        color[u] = 1;
    
    // Assign the smallest unused color to the current vertex
    int smallestColor = 1;
    for (int v : adjList[u]) {
        if (!visited[v]) {
            while (color[u] == smallestColor || color[v] == smallestColor)
                smallestColor++;
            
            color[v] = smallestColor++;
            dfs(v, u);
        }
    }
}

int main() {
    int N;
    cin >> N;
    
    // Create adjacency list to represent the tree
    adjList.resize(N + 1);
    visited.resize(N + 1, false);
    color.resize(N + 1, -1);
    
    for (int i = 1; i < N; i++) {
        int a, b;
        cin >> a >> b;
        
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    
    // Perform a DFS to assign colors to the vertices
    dfs(1, -1);
    
    // Count the number of colors used
    int colorfulness = *max_element(color.begin(), color.end());
    
    // Count the number of leaves (vertices with degree 1)
    int numLeaves = 0;
    for (int i = 1; i <= N; i++) {
        if (adjList[i].size() == 1)
            numLeaves++;
    }
    
    cout << colorfulness << " " << numLeaves << endl;
    
    return 0;
}
