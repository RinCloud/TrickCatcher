#include <iostream>
#include <vector>
using namespace std;

int main() {
   int N, P;
   cin >> N >> P;

   vector<int> A(N);
   for (int i = 0; i < N; i++) {
      cin >> A[i];
   }

   long long int ways = 1LL << N; // Total number of ways to select bags

   // Count the number of ways to select bags such that the total number
   // of biscuits inside is congruent to P modulo 2
   int count = 0;
   for (int i = 1; i <= N; i++) {
      vector<vector<long long int>> dp(N + 1, vector<long long int>(2, 0));
      dp[0][0] = 1;

      for (int j = 0; j < N; j++) {
         dp[j + 1][0] = dp[j][0];
         dp[j + 1][1] = dp[j][1];

         if (j == i - 1) {
            dp[j + 1][0] += dp[j][0];
            dp[j + 1][1] += dp[j][1];
         } else {
            dp[j + 1][0] += dp[j][0] + dp[j][1];
            dp[j + 1][1] += dp[j][0] + dp[j][1];
         }
      }

      if (P == 0) {
         count += dp[N][0];
      } else {
         count += dp[N][1];
      }
   }

   cout << ways - count << endl;

   return 0;
}