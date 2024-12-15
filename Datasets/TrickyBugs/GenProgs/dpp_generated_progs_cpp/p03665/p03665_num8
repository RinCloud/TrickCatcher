#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, P;
    cin >> N >> P;
    
    vector<int> bags(N);
    for (int i = 0; i < N; i++) {
        cin >> bags[i];
    }
    
    vector<vector<long long>> dp(N+1, vector<long long>(2, 0)); // dp[i][j] represents the number of ways to select bags up to index i to get a total number of biscuits congruent to j modulo 2
    
    dp[0][0] = 1; // Base case, there is one way to select no bags
    dp[0][1] = 1; // Base case, there is one way to select no bags
    
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < 2; j++) {
            dp[i][j] = dp[i-1][j] + dp[i-1][(j + bags[i-1]) % 2];
        }
    }
    
    cout << dp[N][P] << endl;
    
    return 0;
}