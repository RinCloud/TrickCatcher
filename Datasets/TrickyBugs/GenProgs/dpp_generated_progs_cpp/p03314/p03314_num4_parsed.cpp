#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K, M;
    cin >> N >> K >> M;
    
    vector<int> A(M);
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }
    
    vector<vector<vector<long long>>> dp(N+1, vector<vector<long long>>(K+1, vector<long long>(K+1, 0)));
    
    for (int i = 0; i < M; i++) {
        dp[0][0][A[i]] = 1;
    }
    
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= K; j++) {
            for (int k = 1; k <= K; k++) {
                for (int l = 1; l <= K; l++) {
                    if (j == l) {
                        dp[i][j][k] += dp[i-1][j][l];
                        dp[i][j][k] %= MOD;
                    } else {
                        dp[i][j][k] += dp[i-1][j-1][l];
                        dp[i][j][k] %= MOD;
                    }
                }
            }
        }
    }
    
    long long sum = 0;
    for (int i = 1; i <= K; i++) {
        sum += dp[N][K][i];
        sum %= MOD;
    }
    
    cout << sum << endl;
    
    return 0;
}