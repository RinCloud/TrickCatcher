#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MAX_N = 55;
int dp[MAX_N][MAX_N * MAX_N / 2];
int fact[MAX_N];

void precalculateFactorials() {
    fact[0] = 1;
    for (int i = 1; i < MAX_N; i++) {
        fact[i] = (1LL * fact[i-1] * i) % MOD;
    }
}

int countPermutations(int n, int k) {
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            for (int l = 0; l <= min(i, j); l++) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - l]) % MOD;
            }
        }
    }
    return dp[n][k];
}

int main() {
    int n, k;
    cin >> n >> k;
    
    precalculateFactorials();
    
    int numPermutations = countPermutations(n, k);
    
    cout << numPermutations << endl;
    
    return 0;
}