#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Read input
  int H, W;
  cin >> H >> W;
  vector<vector<char>> grid(H, vector<char>(W));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> grid[i][j];
    }
  }

  // Process the grid
  int operations = 0;
  vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
  while (true) {
    bool changed = false;
    vector<vector<char>> newGrid = grid;
    for (int i = 0; i < H; i++) {
      for (int j = 0; j < W; j++) {
        if (grid[i][j] == '#') {
          continue;
        }
        bool adjacentBlack = false;
        for (auto& dir : directions) {
          int ni = i + dir.first;
          int nj = j + dir.second;
          if (ni >= 0 && ni < H && nj >= 0 && nj < W && grid[ni][nj] == '#') {
            adjacentBlack = true;
            break;
          }
        }
        if (adjacentBlack) {
          newGrid[i][j] = '#';
          changed = true;
        }
      }
    }
    if (!changed) {
      break;
    }
    grid = newGrid;
    operations++;
  }

  // Print the number of operations
  cout << operations << endl;

  return 0;
}