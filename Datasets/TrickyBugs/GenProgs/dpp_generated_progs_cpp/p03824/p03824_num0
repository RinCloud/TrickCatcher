#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[100001]; // Adjacency list to store the tree

// Function to perform DFS on the tree and find the maximum depth
int dfs(int node, int parent, int depth) {
    int max_depth = depth; // Initialize the max_depth to the current depth

    // Traverse through all the adjacent nodes of the current node
    for (int i = 0; i < adj[node].size(); i++) {
        int child = adj[node][i];
        
        // Skip the traversal for the parent node
        if (child == parent)
            continue;

        // Recursively call the dfs function for the child node with an increased depth
        int child_depth = dfs(child, node, depth + 1);

        // Update the max_depth if the child node has a higher depth
        if (child_depth > max_depth)
            max_depth = child_depth;
    }

    return max_depth;
}

int main() {
    int N;
    cin >> N;

    // Read the tree edges and create the adjacency list
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    // Perform DFS on the tree starting from any node
    int max_depth = dfs(1, -1, 0);

    // The minimum k such that the given tree is a tree of uninity k is equal to the maximum depth divided by 2
    int min_k = max_depth / 2;

    cout << min_k << endl;

    return 0;
}