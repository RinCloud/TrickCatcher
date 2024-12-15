#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    
    vector<string> grid(H);
    for (int i = 0; i < H; i++) {
        cin >> grid[i];
    }
    
    vector<vector<int>> bombsAdj(H, vector<int>(W, 0));
    vector<vector<int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '#') {
                continue;
            }
            
            for (auto direction : directions) {
                int ni = i + direction[0];
                int nj = j + direction[1];
                
                if (ni >= 0 && ni < H && nj >= 0 && nj < W && grid[ni][nj] == '#') {
                    bombsAdj[i][j]++;
                }
            }
        }
    }
    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '#') {
                cout << '#';
            } else {
                cout << bombsAdj[i][j];
            }
        }
        cout << endl;
    }
    
    return 0;
}
