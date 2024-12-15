#include <iostream>
#include <vector>

using namespace std;

int main() {
   int N, K;
   cin >> N >> K;

   vector<vector<int>> grid(2*K, vector<int>(2*K, 0));

   for (int i = 0; i < N; i++) {
      int x, y;
      char c;
      cin >> x >> y >> c;

      x %= 2 * K;
      y %= 2 * K;

      if ((x < K && y < K) || (x >= K && y >= K)) {
         if (c == 'B') {
            grid[x][y]++;
         }
         else {
            grid[x][y]--;
         }
      }
      else {
         if (c == 'B') {
            grid[x][y]--;
         }
         else {
            grid[x][y]++;
         }
      }
   }

   int maxDesires = 0;

   for (int i = 0; i < 2 * K; i++) {
      for (int j = 0; j < 2 * K; j++) {
         if (i > 0) {
            grid[i][j] += grid[i - 1][j];
         }
         if (j > 0) {
            grid[i][j] += grid[i][j - 1];
         }
         if (i > 0 && j > 0) {
            grid[i][j] -= grid[i - 1][j - 1];
         }

         int whiteDesires = grid[i][j];
         int blackDesires = (i + j) % 2 == 0 ? 0 : -grid[i][j];
         int desires = max(whiteDesires, blackDesires);

         if (i > 0) {
            desires -= grid[i - 1][j];
         }
         if (j > 0) {
            desires -= grid[i][j - 1];
         }
         if (i > 0 && j > 0) {
            desires += grid[i - 1][j - 1];
         }

         maxDesires = max(maxDesires, N + desires);
      }
   }

   cout << maxDesires << endl;

   return 0;
}