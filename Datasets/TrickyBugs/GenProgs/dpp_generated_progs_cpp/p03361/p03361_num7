#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<char>> s(H, vector<char>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> s[i][j];
        }
    }
    
    vector<vector<bool>> visited(H, vector<bool>(W, false));
    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (!visited[i][j]) {
                char target = s[i][j];
                visited[i][j] = true;
                vector<int> dx = {1, -1, 0, 0};
                vector<int> dy = {0, 0, 1, -1};
                
                vector<pair<int, int>> stack = {{i, j}};
                
                while (!stack.empty()) {
                    pair<int, int> curr = stack.back();
                    stack.pop_back();
                    
                    for (int k = 0; k < 4; k++) {
                        int ni = curr.first + dx[k];
                        int nj = curr.second + dy[k];
                        
                        if (ni >= 0 && ni < H && nj >= 0 && nj < W && !visited[ni][nj] && s[ni][nj] == target) {
                            visited[ni][nj] = true;
                            stack.emplace_back(ni, nj);
                        }
                    }
                }
                
                bool canBePainted = true;
                
                for (int x = 0; x < H; x++) {
                    for (int y = 0; y < W; y++) {
                        if (!visited[x][y] && s[x][y] == target) {
                            canBePainted = false;
                        }
                    }
                }
                
                if (!canBePainted) {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    
    cout << "Yes" << endl;
    
    return 0;
}