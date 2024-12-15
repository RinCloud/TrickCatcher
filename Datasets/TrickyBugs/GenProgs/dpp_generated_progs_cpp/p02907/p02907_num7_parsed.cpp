#include <iostream>
#include <vector>

using namespace std;

const long long MOD = 998244353;

long long modPow(long long base, long long exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp & 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return result;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N), B(N);
    int sumA = 0, sumB = 0;
    
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
        sumA += A[i];
        sumB += B[i];
    }
    
    vector<vector<long long>> dp(sumB + 1, vector<long long>(sumA + 1, 0));
    dp[0][0] = 1;
    
    for (int i = 1; i <= sumB; i++) {
        for (int j = 1; j <= sumA; j++) {
            for (int k = 0; k < N; k++) {
                if (j >= A[k]) {
                    dp[i][j] += dp[i - 1][j - A[k]];
                    dp[i][j] %= MOD;
                }
            }
        }
    }
    
    long long ans = 0;
    for (int i = 1; i <= sumB; i++) {
        long long coeff = (modPow(i, MOD - 2) * dp[i][sumA]) % MOD;
        ans = (ans + coeff * i) % MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}