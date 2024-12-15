#include <iostream>
#include <vector>
using namespace std;

int countWays(vector<int> bags, int N, int P) {
    // dp[i][j] represents the number of ways to select bags such that the total number of biscuits inside
    // is congruent to j modulo 2 considering the first i bags.
    vector<vector<int>> dp(N+1, vector<int>(2));
    
    dp[0][0] = 1; // There is 1 way to select 0 bags such that the total number of biscuits is congruent to 0 modulo 2.
    
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < 2; j++) {
            dp[i][j] = dp[i-1][j]; // Don't select the i-th bag.
            
            int remaining_mod = bags[i-1] % 2; // Calculate the modulo of the number of biscuits in the i-th bag.
            dp[i][j] += dp[i-1][(j + remaining_mod) % 2]; // Select the i-th bag.
        }
    }
    
    return dp[N][P];
}

int main() {
    int N, P;
    cin >> N >> P;
    vector<int> bags(N);
    for (int i = 0; i < N; i++) {
        cin >> bags[i];
    }
    
    int ways = countWays(bags, N, P);
    cout << ways << endl;
    
    return 0;
}