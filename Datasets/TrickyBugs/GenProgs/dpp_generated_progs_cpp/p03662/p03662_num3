#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    // Creating adjacency list for the tree
    vector<vector<int>> adjList(N);
    for (int i = 0; i < N-1; i++) {
        int a, b;
        cin >> a >> b;
        adjList[a-1].push_back(b-1);
        adjList[b-1].push_back(a-1);
    }
    
    // Counting the number of black and white cells in the tree
    int blackCount = 0;
    int whiteCount = 0;
    
    // BFS to traverse the tree and count the cells
    queue<int> q;
    q.push(0); // Starting from Cell 1
    vector<bool> visited(N, false);
    visited[0] = true;
    
    while (!q.empty()) {
        int currentCell = q.front();
        q.pop();
        
        // Updating the count of black or white cells
        if (currentCell == 0) {
            blackCount++;
        } else if (currentCell == N-1) {
            whiteCount++;
        }
        
        // Traverse the adjacent cells
        for (int neighbor : adjList[currentCell]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    
    // Comparing the counts to determine the winner
    if (blackCount > whiteCount) {
        cout << "Fennec" << endl;
    } else {
        cout << "Snuke" << endl;
    }
    
    return 0;
}