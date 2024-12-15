#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;
    
    // Creating a 2D dynamic programming array
    long long** dp = new long long*[K+1];
    for (int i = 0; i <= K; i++) {
        dp[i] = new long long[N+1];
    }
    
    // Initializing the dp array
    for (int i = 1; i <= N; i++) {
        dp[1][i] = 1;
    }
    
    // Filling up the dp array
    for (int i = 2; i <= K; i++) {
        for (int j = 1; j <= N; j++) {
            long long sum = 0;
            for (int k = 1; k <= j; k++) {
                sum += dp[i-1][k];
                sum %= MOD;
            }
            dp[i][j] = sum;
        }
    }
    
    // Computing the answer
    long long answer = 0;
    for (int i = 1; i <= N; i++) {
        answer += dp[K][i];
        answer %= MOD;
    }
    
    cout << answer << endl;
    
    // Freeing the memory used by dp array
    for (int i = 0; i <= K; i++) {
        delete [] dp[i];
    }
    delete [] dp;
    
    return 0;
}