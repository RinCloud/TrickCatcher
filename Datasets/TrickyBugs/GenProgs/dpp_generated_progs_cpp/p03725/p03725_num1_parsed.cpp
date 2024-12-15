#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int bfs(vector<vector<char>>& building, int start_row, int start_col, int k) {
    int h = building.size();
    int w = building[0].size();
    vector<vector<int>> distance(h, vector<int>(w, -1));
    
    queue<pair<int, int>> q;
    q.push({start_row, start_col});
    distance[start_row][start_col] = 0;
    
    int min_casts = -1;
    while (!q.empty()) {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        
        if (row == 0 || row == h-1 || col == 0 || col == w-1) {
            min_casts = distance[row][col];
            break;
        }
        
        int moves = distance[row][col] / k;
        int unlocked = distance[row][col] % k;
        
        if (row > 0 && building[row-1][col] == '.' && distance[row-1][col] == -1) {
            q.push({row-1, col});
            distance[row-1][col] = (moves+1)*k + unlocked + 1;
        }
        if (row < h-1 && building[row+1][col] == '.' && distance[row+1][col] == -1) {
            q.push({row+1, col});
            distance[row+1][col] = (moves+1)*k + unlocked + 1;
        }
        if (col > 0 && building[row][col-1] == '.' && distance[row][col-1] == -1) {
            q.push({row, col-1});
            distance[row][col-1] = (moves+1)*k + unlocked + 1;
        }
        if (col < w-1 && building[row][col+1] == '.' && distance[row][col+1] == -1) {
            q.push({row, col+1});
            distance[row][col+1] = (moves+1)*k + unlocked + 1;
        }
        
        if (building[row][col] == '#') {
            if (moves == 0 && unlocked < k) {
                if (row > 0 && distance[row-1][col] == -1) {
                    q.push({row-1, col});
                    distance[row-1][col] = (moves+1)*k + unlocked + 1;
                }
                if (row < h-1 && distance[row+1][col] == -1) {
                    q.push({row+1, col});
                    distance[row+1][col] = (moves+1)*k + unlocked + 1;
                }
                if (col > 0 && distance[row][col-1] == -1) {
                    q.push({row, col-1});
                    distance[row][col-1] = (moves+1)*k + unlocked + 1;
                }
                if (col < w-1 && distance[row][col+1] == -1) {
                    q.push({row, col+1});
                    distance[row][col+1] = (moves+1)*k + unlocked + 1;
                }
            }
        }
    }
    
    return min_casts;
}

int main() {
    int h, w, k;
    cin >> h >> w >> k;
    
    vector<vector<char>> building(h, vector<char>(w));
    int start_row, start_col;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> building[i][j];
            if (building[i][j] == 'S') {
                start_row = i;
                start_col = j;
            }
        }
    }
    
    int min_casts = bfs(building, start_row, start_col, k);
    cout << min_casts << endl;
    
    return 0;
}