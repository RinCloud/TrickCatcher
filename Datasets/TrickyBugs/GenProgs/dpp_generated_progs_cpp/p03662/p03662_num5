#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to determine the winner of the game
string determineWinner(int N, vector<vector<int>>& adj_list) {
    vector<int> color(N + 1, -1); // -1: uncolored, 0: black, 1: white
    
    // BFS to traverse the tree and color the cells
    queue<int> q;
    q.push(1); // start from cell 1 (black)
    color[1] = 0; // color cell 1 as black
    
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        
        for (int nei : adj_list[curr]) {
            if (color[nei] == -1) {
                if (color[curr] == 0) {
                    color[nei] = 1; // color adjacent uncolored cell as white (Snuke's turn)
                } else {
                    color[nei] = 0; // color adjacent uncolored cell as black (Fennec's turn)
                }
                
                q.push(nei);
            }
        }
    }
    
    // Count number of black and white cells
    int num_black = 0;
    int num_white = 0;
    for (int i = 1; i <= N; i++) {
        if (color[i] == 0) {
            num_black++;
        } else if (color[i] == 1) {
            num_white++;
        }
    }
    
    // Determine the winner
    if (num_black > num_white) {
        return "Fennec";
    } else {
        return "Snuke";
    }
}

int main() {
    int N;
    cin >> N;
    
    // Create adjacency list to represent the tree
    vector<vector<int>> adj_list(N + 1);
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    
    // Determine the winner of the game
    string winner = determineWinner(N, adj_list);
    
    // Print the result
    cout << winner << endl;
    
    return 0;
}