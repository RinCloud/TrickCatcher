#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int N;
  std::cin >> N;

  std::vector<int> ratings(N);
  for (int i = 0; i < N; ++i) {
      std::cin >> ratings[i];
  }

  std::sort(ratings.begin(), ratings.end());

  std::vector<bool> colors(9, false);
  int min_colors = 0;
  int max_colors = 0;

  for (int i = 0; i < N; ++i) {
      if (ratings[i] < 3200) {
          int color = ratings[i] / 400;
          colors[color] = true;
      } else {
          max_colors++;
      }
  }

  for (int i = 0; i < 8; ++i) {
      if (colors[i]) {
          min_colors++;
      }
  }

  if (min_colors == 0) {
      min_colors = 1;
  }

  max_colors += min_colors;

  std::cout << min_colors << " " << max_colors << std::endl;

  return 0;
}