#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> red_boxes(N, 0);
  red_boxes[0] = 1;

  vector<int> white_balls(N, 1);

  for (int i = 0; i < M; i++) {
    int x, y;
    cin >> x >> y;

    white_balls[x-1]--; // remove ball from x
    white_balls[y-1]++; // add ball to y

    if (red_boxes[x-1] == 1) {
      red_boxes[y-1] = 1;
      if (white_balls[x-1] == 0) {
        red_boxes[x-1] = 0;
      }
    }
  }

  int count = 0;
  for (int i = 0; i < N; i++) {
    if (red_boxes[i] == 1) {
      count++;
    }
  }

  cout << count << endl;

  return 0;
}