#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> grid(H);
    for (int i = 0; i < H; i++) {
        cin >> grid[i];
    }
    
    vector<vector<int>> adj(H, vector<int>(W, 0));
    vector<int> dx = {1, 1, 1, 0, 0, -1, -1, -1};
    vector<int> dy = {1, 0, -1, 1, -1, 1, 0, -1};
    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '#') {
                continue;
            }
            
            for (int k = 0; k < 8; k++) {
                int nx = i + dx[k];
                int ny = j + dy[k];
                if (nx >= 0 && nx < H && ny >= 0 && ny < W && grid[nx][ny] == '#') {
                    adj[i][j]++;
                }
            }
        }
    }
    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '.') {
                grid[i][j] = '0' + adj[i][j];
            }
        }
    }
    
    for (int i = 0; i < H; i++) {
        cout << grid[i] << endl;
    }
    
    return 0;
}