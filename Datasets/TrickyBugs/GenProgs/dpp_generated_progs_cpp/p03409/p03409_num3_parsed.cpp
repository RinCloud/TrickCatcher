#include <iostream>
#include <vector>
#include <algorithm>

struct Point {
  int x;
  int y;
};

int main() {
  int N;
  std::cin >> N;

  std::vector<Point> redPoints(N);
  std::vector<Point> bluePoints(N);

  // Read the coordinates of the red points
  for (int i = 0; i < N; i++) {
    std::cin >> redPoints[i].x >> redPoints[i].y;
  }

  // Read the coordinates of the blue points
  for (int i = 0; i < N; i++) {
    std::cin >> bluePoints[i].x >> bluePoints[i].y;
  }

  // Sort the red and blue points based on their x-coordinate
  std::sort(redPoints.begin(), redPoints.end(), [](const Point& p1, const Point& p2) {
    return p1.x < p2.x;
  });

  std::sort(bluePoints.begin(), bluePoints.end(), [](const Point& p1, const Point& p2) {
    return p1.x < p2.x;
  });

  int friendlyPairs = 0;
  int j = 0;

  // Compare each red point with the blue points to find friendly pairs
  for (int i = 0; i < N; i++) {
    while (j < N && redPoints[i].x >= bluePoints[j].x) {
      j++;
    }

    if (j < N && redPoints[i].y < bluePoints[j].y) {
      friendlyPairs++;
      j++;
    }
  }

  std::cout << friendlyPairs << std::endl;

  return 0;
}
