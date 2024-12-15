#include <iostream>
#include <vector>
#include <map>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K, M;
    cin >> N >> K >> M;
    
    vector<int> A(M);
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    vector<long long> dp(N + 1);
    dp[0] = 1;

    map<int, int> lastIndex;
    int consecCount = 0;

    for (int i = 1; i <= N; i++) {
        dp[i] = (dp[i - 1] * K) % MOD;

        if (i <= M && lastIndex[A[i - 1]] >= i - K) {
            int pos = lastIndex[A[i - 1]];
            dp[i] = (dp[i] - dp[pos] + MOD) % MOD;

            if (pos + 1 == i - K) {
                consecCount--;
            }
        }

        lastIndex[A[i - 1]] = i - 1;
        consecCount++;

        if (i > K) {
            dp[i] = (dp[i] + consecCount) % MOD;
        }
    }

    long long ans = 0;
    for (int i = 1; i <= N; i++) {
        ans = (ans + dp[i]) % MOD;
    }

    cout << ans << endl;

    return 0;
}