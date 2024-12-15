#include<bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> grid(H);
  for(int i = 0; i < H; i++) {
    cin >> grid[i];
  }

  vector<vector<int>> top(H, vector<int>(W, 0));
  vector<vector<int>> bottom(H, vector<int>(W, 0));
  vector<vector<int>> left(H, vector<int>(W, 0));
  vector<vector<int>> right(H, vector<int>(W, 0));

  for(int i=0; i<H; i++) {
    int count = 0;
    for(int j=0; j<W; j++) {
      if(grid[i][j] == '#') {
        count = 0;
      }
      else {
        count++;
      }
      left[i][j] = count;
    }

    count = 0;
    for(int j=W-1; j>=0; j--) {
      if(grid[i][j] == '#') {
        count = 0;
      }
      else {
        count++;
      }
      right[i][j] = count;
    }
  }

  for(int j = 0; j < W; j++) {
    int count = 0;
    for(int i = 0; i < H; i++) {
      if(grid[i][j] == '#') {
        count = 0;
      }
      else {
        count++;
      }
      top[i][j] = count;
    }

    count = 0;
    for(int i = H-1; i >= 0; i--) {
      if(grid[i][j] == '#') {
        count = 0;
      }
      else {
        count++;
      }
      bottom[i][j] = count;
    }
  }

  int maxArea = 0;

  for(int i=0; i<H; i++) {
    for(int j=0; j<W; j++) {
      int area = top[i][j] + bottom[i][j] + left[i][j] + right[i][j] - 3;
      maxArea = max(maxArea, area);
    }
  }

  cout << maxArea << endl;

  return 0;
}