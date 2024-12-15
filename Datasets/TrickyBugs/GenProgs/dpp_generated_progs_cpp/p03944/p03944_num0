#include <iostream>
#include <vector>

int main() {
  int W, H, N;
  std::cin >> W >> H >> N;

  std::vector<std::vector<int>> map(W, std::vector<int>(H, 1));

  for (int i = 0; i < N; i++) {
    int x, y, a;
    std::cin >> x >> y >> a;

    if (a == 1) {
      for (int j = 0; j < x; j++) {
        for (int k = 0; k < H; k++) {
          map[j][k] = 0;
        }
      }
    } else if (a == 2) {
      for (int j = x+1; j < W; j++) {
        for (int k = 0; k < H; k++) {
          map[j][k] = 0;
        }
      }
    } else if (a == 3) {
      for (int j = 0; j < W; j++) {
        for (int k = 0; k < y; k++) {
          map[j][k] = 0;
        }
      }
    } else {
      for (int j = 0; j < W; j++) {
        for (int k = y+1; k < H; k++) {
          map[j][k] = 0;
        }
      }
    }
  }

  int white_area = 0;
  for (int i = 0; i < W; i++) {
    for (int j = 0; j < H; j++) {
      if (map[i][j] == 1) {
        white_area++;
      }
    }
  }

  std::cout << white_area << std::endl;
  return 0;
}