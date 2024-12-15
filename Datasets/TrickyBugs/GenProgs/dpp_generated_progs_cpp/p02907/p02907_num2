#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

const int MOD = 998244353;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }
    
    vector<int> dp(N+1);
    dp[0] = 1;
    
    int S = accumulate(A.begin(), A.end(), 0);
    
    for (int i = 1; i <= S; i++) {
        for (int j = N-1; j >= 0; j--) {
            if (B[j] <= i) {
                dp[i] = (dp[i] + dp[i-B[j]]) % MOD;
            }
        }
    }
    
    vector<int> prob(S+1, 1);
    for (int i = 1; i <= S; i++) {
        for (int j = 0; j < N; j++) {
            if (A[j] >= i) {
                prob[i] = (prob[i] * (A[j]-i+1)) % MOD;
            } else {
                prob[i] = (prob[i] * A[j]) % MOD;
            }
        }
    }
    
    int ans = 0;
    for (int i = 0; i <= S; i++) {
        ans = (ans + (dp[i] * prob[i]) % MOD) % MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}