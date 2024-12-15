#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<int> adj[101];

// Function to compute the number of leaves in a tree rooted at v
int computeLeaves(int v, int parent) {
    int leaves = 0;
    for (int u : adj[v]) {
        if (u != parent) {
            leaves += computeLeaves(u, v);
        }
    }
    // If v is a leaf node (i.e. it has only one child which is its parent)
    if (adj[v].size() == 1) {
        leaves++;
    }
    return leaves;
}

// Function to compute the colorfulness of the tree rooted at v
pair<int, int> computeColorfulness(int v, int parent) {
    set<int> colors;
    for (int u : adj[v]) {
        if (u != parent) {
            pair<int, int> subColorfulness = computeColorfulness(u, v);
            colors.insert(subColorfulness.first);
        }
    }

    int colorfulness = colors.size() + 1;
    int leaves = computeLeaves(v, parent);
    return make_pair(colorfulness, leaves);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    pair<int, int> result = computeColorfulness(1, 0);
    cout << result.first << " " << result.second << endl;

    return 0;
}