#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to find lexicographically smallest (A,B) pair
pair<int, int> findSmallestPair(int N, vector<vector<int>>& adj) {
    vector<int> degree(N + 1);

    // Count the degree of each node
    for (int i = 1; i <= N; i++) {
        for (int j : adj[i]) {
            degree[i]++;
            degree[j]++;
        }
    }

    // Find the maximum degree
    int maxDegree = 0;
    for (int i = 1; i <= N; i++) {
        maxDegree = max(maxDegree, degree[i]);
    }

    int A = 0, B = 0;

    // Iterate over possible values of A and B
    for (int i = 0; i <= N; i++) {
        if (maxDegree <= i) {
            A = i;
            break;
        }
    }

    for (int i = 1; i <= N; i++) {
        if (degree[i] == 1) {
            queue<int> q;
            q.push(i);

            vector<bool> visited(N + 1, false);
            visited[i] = true;

            int length = 0;
            while (!q.empty()) {
                int curr = q.front();
                q.pop();

                for (int next : adj[curr]) {
                    if (!visited[next]) {
                        q.push(next);
                        visited[next] = true;
                        length++;
                    }
                }
            }

            B = max(B, length);
        }
    }

    return {A, B};
}

int main() {
    int N;
    cin >> N;

    // Build adjacency list
    vector<vector<int>> adj(N + 1);
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    // Find the lexicographically smallest pair (A,B)
    pair<int, int> smallestPair = findSmallestPair(N, adj);

    cout << smallestPair.first << " " << smallestPair.second << endl;

    return 0;
}
