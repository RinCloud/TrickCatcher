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
    
    vector<vector<int>> bombCount(H, vector<int>(W, 0));
    
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '.') {
                for (int k = 0; k < 8; k++) {
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    if (ni >= 0 && ni < H && nj >= 0 && nj < W && grid[ni][nj] == '#') {
                        bombCount[i][j]++;
                    }
                }
            }
        }
    }
    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '.') {
                cout << bombCount[i][j];
            } else {
                cout << '#';
            }
        }
        cout << '\n';
    }
    
    return 0;
}
