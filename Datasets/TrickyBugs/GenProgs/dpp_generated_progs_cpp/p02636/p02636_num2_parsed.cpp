#include <iostream>
#include <string>
#include <vector>

using namespace std;

const long long MOD = 998244353;
const int MAX_N = 305;

int main() {
    string S;
    cin >> S;

    int n = S.length();
    vector<long long> dp(MAX_N, 0);

    dp[n] = 1;
    for (int i = n - 1; i >= 2; i--) {
        if (S[i - 2] == S[i - 1]) {
            dp[i] = (dp[i] + dp[i + 2]) % MOD;
        }
        dp[i] = (dp[i] + dp[i + 1]) % MOD;
    }
    long long cnt = dp[2];

    for (int i = 1; i < n; i++) {
        if (S[i - 1] != S[i]) {
            cnt = (cnt * 2) % MOD;
        }
    }
    
    cout << cnt << endl;

    return 0;
}
