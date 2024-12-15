#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> A(M);
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    
    vector<int> factorial(N + 1, 1);
    for (int i = 2; i <= N; i++) {
        factorial[i] = (factorial[i - 1] * i) % MOD;
    }
    
    vector<int> dp(1 << N, 0);
    dp[0] = 1;
    
    for (int mask = 1; mask < (1 << N); mask++) {
        for (int i = 0; i < N; i++) {
            int player = i + 1;
            
            if ((mask & (1 << i)) == 0) {
                bool is_winner = true;
                for (int j = 0; j < M; j++) {
                    if (A[j] == player) {
                        is_winner = false;
                        break;
                    }
                }
                
                if (is_winner) {
                    dp[mask] += dp[mask ^ (1 << i)];
                    if (dp[mask] >= MOD) {
                        dp[mask] -= MOD;
                    }
                }
            }
        }
    }
    
    int answer = (dp[(1 << N) - 1] * factorial[N]) % MOD;
    cout << answer << endl;
    
    return 0;
}