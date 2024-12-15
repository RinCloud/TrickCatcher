#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> dp(M + 1, 0);
    dp[1] = 1;

    for (int i = 2; i <= M; i++) {
        for (int j = i; j <= M; j += i) {
            dp[j] = (dp[j] + dp[i - 1]) % MOD;
        }
    }

    int answer = 0;
    for (int i = 1; i <= M; i++) {
        answer = (answer + dp[i]) % MOD;
    }

    cout << answer << endl;

    return 0;
}