#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

// struct to represent a cell in the maze
struct Cell {
    int row;
    int col;
    int dist;
};

// utility function to check if the given cell is a valid road or not
bool isValidRoad(vector<vector<char>>& maze, int row, int col, int H, int W) {
    return (row >= 0 && row < H && col >= 0 && col < W && maze[row][col] == '.');
}

// utility function to check if the given cell is already visited or not
bool isVisited(vector<vector<int>>& visited, int row, int col) {
    return (visited[row][col] != 0);
}

// function to find the minimum number of times the magician needs to use magic
int minMagicMoves(vector<vector<char>>& maze, int C_h, int C_w, int D_h, int D_w, int H, int W) {
    vector<vector<int>> visited(H, vector<int>(W, 0));   // matrix to keep track of visited cells
    queue<Cell> q;   // queue for BFS traversal

    // directions for adjacent cells
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};

    // push the starting cell into the queue
    q.push({C_h-1, C_w-1, 0});
    visited[C_h-1][C_w-1] = 1;

    while (!q.empty()) {
        Cell curr = q.front();
        q.pop();

        int curr_row = curr.row;
        int curr_col = curr.col;
        int curr_dist = curr.dist;

        if (curr_row == D_h-1 && curr_col == D_w-1) {
            return curr_dist;
        }

        // move A: check all four adjacent cells
        for (int i = 0; i < 4; i++) {
            int new_row = curr_row + dx[i];
            int new_col = curr_col + dy[i];

            if (isValidRoad(maze, new_row, new_col, H, W) && !isVisited(visited, new_row, new_col)) {
                visited[new_row][new_col] = 1;
                q.push({new_row, new_col, curr_dist});
            }
        }

        // move B: check all cells in the 5x5 area centered at the current cell
        for (int i = -2; i <= 2; i++) {
            for (int j = -2; j <= 2; j++) {
                int new_row = curr_row + i;
                int new_col = curr_col + j;

                if (isValidRoad(maze, new_row, new_col, H, W) && !isVisited(visited, new_row, new_col)) {
                    visited[new_row][new_col] = 1;
                    q.push({new_row, new_col, curr_dist + 1});
                }
            }
        }
    }

    return -1;
}

int main() {
    int H, W;
    cin >> H >> W;
    int C_h, C_w;
    cin >> C_h >> C_w;
    int D_h, D_w;
    cin >> D_h >> D_w;

    vector<vector<char>> maze(H, vector<char>(W));

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> maze[i][j];
        }
    }

    int min_moves = minMagicMoves(maze, C_h, C_w, D_h, D_w, H, W);
    cout << min_moves << endl;

    return 0;
}
