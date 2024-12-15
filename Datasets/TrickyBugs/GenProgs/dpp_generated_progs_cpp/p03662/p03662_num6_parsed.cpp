#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> adj;
vector<int> colors;

void bfs() {
    queue<int> q;
    q.push(1);
    colors[1] = 1;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        // Check if the current cell is colored black or white
        int currColor = colors[curr];

        // Iterate over the adjacent cells
        for (int next : adj[curr]) {
            // If the adjacent cell is not colored, color it
            if (colors[next] == 0) {
                colors[next] = (currColor == 1) ? 2 : 1;
                q.push(next);
            }
        }
    }
}

int main() {
    int N;
    cin >> N;

    adj.resize(N + 1);
    colors.resize(N + 1, 0);

    // Read the roads and build the adjacency list
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    // Run BFS to color the cells
    bfs();

    // Count the number of black and white cells
    int blackCount = 0, whiteCount = 0;
    for (int color : colors) {
        if (color == 1)
            blackCount++;
        else if (color == 2)
            whiteCount++;
    }

    // Determine the winner based on the number of black and white cells
    if (blackCount > whiteCount)
        cout << "Fennec" << endl;
    else
        cout << "Snuke" << endl;

    return 0;
}
