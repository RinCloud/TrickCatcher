#include <iostream>
#include <vector>

using namespace std;

const int MOD = 998244353;

int main() {
    int N, K, P;
    cin >> N >> K >> P;
    
    vector<vector<int>> dp(N + 1, vector<int>(N + 1, 0));
    dp[0][0] = 1;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            for (int k = 1; k <= j && k <= K; k++) {
                dp[i][j] = (dp[i][j] + dp[i - j][k - 1]) % MOD;
            }
        }
    }
    
    int result = 1;
    for (int i = 2; i <= N; i++) {
        result = (result * i) % P;
    }
    
    int numGraphs = 0;
    for (int i = 0; i < N; i++) {
        numGraphs = (numGraphs + dp[N][i]) % MOD;
    }
    
    result = (result * numGraphs) % P;
    cout << result << endl;
    
    return 0;
}