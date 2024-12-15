#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 998244353;

// Function to calculate modular exponentiation
long long power(long long x, long long y) {
    long long res = 1;
    x = x % MOD;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % MOD;
        y = y >> 1;
        x = (x * x) % MOD;
    }
    return res;
}

// Function to calculate modular inverse
long long modInverse(long long n) {
    return power(n, MOD - 2);
}

// Function to calculate factorial
long long factorial(long long n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact = (fact * i) % MOD;
    return fact;
}

// Function to calculate nCr
long long nCr(long long n, long long r) {
    if (r == 0 || r == n)
        return 1;
    if (r > n - r)
        r = n - r;
    long long numer = 1, denom = 1;
    for (int i = 0; i < r; i++) {
        numer = (numer * (n - i)) % MOD;
        denom = (denom * (i + 1)) % MOD;
    }
    return (numer * modInverse(denom)) % MOD;
}

int main() {
    string S;
    long long K;
    cin >> S;
    cin >> K;
    
    int n = S.size();
    
    vector<int> ones;
    for (int i = 0; i < n; i++) {
        if (S[i] == '1')
            ones.push_back(i);
    }
    
    int m = ones.size();
    
    vector<vector<long long>> dp(n + 1, vector<long long>(K + 1));
    dp[0][0] = 1;
    
    for (int i = 1; i <= m; i++) {
        for (int j = 0; j <= K; j++) {
            for (int k = 0; k <= i; k++) {
                int cntZeros = ones[i - 1] - ones[k] - (i - k - 1);
                dp[i][j] = (dp[i][j] + (dp[k][j - cntZeros] * nCr(cntZeros + j, cntZeros)) % MOD) % MOD;
            }
        }
    }
    
    cout << dp[m][K] << endl;
    
    return 0;
}