#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Room {
    int row;
    int col;
    int cast;
};

int main() {
    int H, W, K;
    cin >> H >> W >> K;

    vector<vector<char>> building(H, vector<char>(W));
    vector<vector<bool>> visited(H, vector<bool>(W, false));
    queue<Room> q;

    int startRow, startCol;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> building[i][j];
            if (building[i][j] == 'S') {
                startRow = i;
                startCol = j;
            }
        }
    }

    q.push({startRow, startCol, 0});
    visited[startRow][startCol] = true;

    while (!q.empty()) {
        Room currentRoom = q.front();
        q.pop();

        int row = currentRoom.row;
        int col = currentRoom.col;
        int cast = currentRoom.cast;

        if (row == 0 || row == H - 1 || col == 0 || col == W - 1) {
            cout << cast << endl;
            return 0;
        }

        if (row - 1 >= 0 && !visited[row - 1][col] && building[row - 1][col] != '#') {
            visited[row - 1][col] = true;
            q.push({row - 1, col, cast});
        }

        if (row + 1 < H && !visited[row + 1][col] && building[row + 1][col] != '#') {
            visited[row + 1][col] = true;
            q.push({row + 1, col, cast});
        }

        if (col - 1 >= 0 && !visited[row][col - 1] && building[row][col - 1] != '#') {
            visited[row][col - 1] = true;
            q.push({row, col - 1, cast});
        }

        if (col + 1 < W && !visited[row][col + 1] && building[row][col + 1] != '#') {
            visited[row][col + 1] = true;
            q.push({row, col + 1, cast});
        }

        if (cast < K) {
            for (int i = row - 1; i >= 0; i--) {
                if (building[i][col] == '#') {
                    building[i][col] = '.';
                    q.push({i, col, cast + 1});
                    break;
                } else if (building[i][col] == 'S' || building[i][col] == '.') {
                    break;
                }
            }

            for (int i = row + 1; i < H; i++) {
                if (building[i][col] == '#') {
                    building[i][col] = '.';
                    q.push({i, col, cast + 1});
                    break;
                } else if (building[i][col] == 'S' || building[i][col] == '.') {
                    break;
                }
            }

            for (int j = col - 1; j >= 0; j--) {
                if (building[row][j] == '#') {
                    building[row][j] = '.';
                    q.push({row, j, cast + 1});
                    break;
                } else if (building[row][j] == 'S' || building[row][j] == '.') {
                    break;
                }
            }

            for (int j = col + 1; j < W; j++) {
                if (building[row][j] == '#') {
                    building[row][j] = '.';
                    q.push({row, j, cast + 1});
                    break;
                } else if (building[row][j] == 'S' || building[row][j] == '.') {
                    break;
                }
            }
        }
    }

    return 0;
}