#include<bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

// Function to calculate power of a number
int power(int x, int n) {
    int res = 1;
    while (n) {
        if (n % 2) {
            res = (res * 1LL * x) % MOD;
        }
        x = (x * 1LL * x) % MOD;
        n /= 2;
    }
    return res;
}

// Function to calculate inverse modulo
int inverse(int x) {
    return power(x, MOD - 2);
}

// Function to calculate factorial modulo MOD
int factorial(int n) {
    int res = 1;
    for (int i = 2; i <= n; i++) {
        res = (res * 1LL * i) % MOD;
    }
    return res;
}

// Function to calculate choose(n, k) modulo MOD
int choose(int n, int k) {
    return (factorial(n) * 1LL * inverse(factorial(k))) % MOD * 1LL * inverse(factorial(n - k)) % MOD;
}

// Function to solve the problem
int solve(string S, int K) {
    int n = S.length();
    vector<vector<int>> dp(n + 1, vector<int>(K + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= K; j++) {
            if (j < i) {
                dp[i][j] += dp[i - 1][j];
                dp[i][j] %= MOD;
            }
            for (int k = 1; k <= i; k++) {
                if (S[k - 1] == '1' && k > j) {
                    dp[i][j] += dp[k - 1][j];
                    dp[i][j] %= MOD;
                }
            }
        }
    }

    int ans = 0;
    for (int j = 0; j <= K; j++) {
        ans += dp[n][j];
        ans %= MOD;
    }
    return ans;
}

int main() {
    string S;
    int K;
    cin >> S >> K;

    int result = solve(S, K);
    cout << result << endl;

    return 0;
}