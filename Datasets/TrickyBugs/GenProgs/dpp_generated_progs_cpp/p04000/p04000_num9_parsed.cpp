#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Read input
  int H, W, N;
  cin >> H >> W >> N;
  vector<pair<int,int>> cells(N);
  for (int i = 0; i < N; i++) {
    cin >> cells[i].first >> cells[i].second;
  }
  
  // Count the number of subrectangles with exactly j black cells
  vector<int> counts(10, 0);
  for (int i = 0; i < N; i++) {
    for (int dh = -2; dh <= 0; dh++) {
      for (int dw = -2; dw <= 0; dw++) {
        int r = cells[i].first + dh;
        int c = cells[i].second + dw;
        if (r >= 1 && r + 2 <= H && c >= 1 && c + 2 <= W) {
          counts[0]++;
          counts[1]++;
          counts[2]++;
          counts[3]++;
          counts[4]++;
          counts[5]++;
          counts[6]++;
          counts[7]++;
          counts[8]++;
          counts[9]++;
          if (r == 1 && c == 1) counts[0]--;
          else if (r == 1 && c == W - 2) counts[2]--;
          else if (r == H - 2 && c == 1) counts[6]--;
          else if (r == H - 2 && c == W - 2) counts[8]--;
          else if (r == 1) counts[1]--;
          else if (r == H - 2) counts[7]--;
          else if (c == 1) counts[3]--;
          else if (c == W - 2) counts[5]--;
          else counts[4]--;
        }
      }
    }
  }
  
  // Print the result
  for (int i = 0; i < 10; i++) {
    cout << counts[i] << endl;
  }
  
  return 0;
}