#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> A(M);
    for (int i = 0; i < M; i++) {
      cin >> A[i];
    }
    
    vector<vector<int>> dp(N + 1, vector<int>(1 << N));
    dp[0][0] = 1;
    
    for (int bit = 0; bit < (1 << N); bit++) {
        for (int i = 0; i < N; i++) {
            if (bit & (1 << i)) {
                dp[0][bit] = (dp[0][bit] + dp[0][bit ^ (1 << i)]) % MOD;
            }
        }
    }
    
    for (int i = 0; i < M; i++) {
        for (int bit = 0; bit < (1 << N); bit++) {
            if (!(bit & (1 << (A[i] - 2)))) {
                dp[i + 1][bit] = (dp[i + 1][bit] + dp[i][bit]) % MOD;
            }
        }
        
        for (int bit = 0; bit < (1 << N); bit++) {
            if (!(bit & (1 << (A[i] - 1)))) {
                dp[i + 1][bit | (1 << (A[i] - 1))] = (dp[i + 1][bit | (1 << (A[i] - 1))] + dp[i][bit]) % MOD;
            }
        }
    }
    
    cout << dp[M][(1 << N) - 1] << endl;

    return 0;
}