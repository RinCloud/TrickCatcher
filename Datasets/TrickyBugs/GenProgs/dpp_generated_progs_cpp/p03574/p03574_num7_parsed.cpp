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
    
    vector<vector<int>> directions = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '#') {
                continue;
            }
            
            int count = 0;
            for (int k = 0; k < 8; k++) {
                int nx = i + directions[k][0];
                int ny = j + directions[k][1];
                if (nx >= 0 && nx < H && ny >= 0 && ny < W && grid[nx][ny] == '#') {
                    count++;
                }
            }
            
            grid[i][j] = count + '0';
        }
    }
    
    for (int i = 0; i < H; i++) {
        cout << grid[i] << endl;
    }
    
    return 0;
}