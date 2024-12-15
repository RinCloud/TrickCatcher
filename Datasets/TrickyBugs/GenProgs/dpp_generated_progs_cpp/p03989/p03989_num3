#include <iostream>
#include <vector>

using namespace std;

const long long MOD = 924844033;

long long permutation(int n, int k) {
    vector<long long> dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; i++) {
        dp[i] = ((dp[i - 1] * i) % MOD + (dp[i - 2] * (i - 1)) % MOD) % MOD;
    }
    long long result = dp[n];
    for (int i = 1; i <= k; i++) {
        result = (result - dp[n - i] + MOD) % MOD;
    }
    return result;
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << permutation(n, k) << endl;
    return 0;
}