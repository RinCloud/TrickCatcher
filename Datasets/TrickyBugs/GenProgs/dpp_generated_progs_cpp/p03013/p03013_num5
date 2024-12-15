#include <iostream>
#include <vector>
using namespace std;

const int mod = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;

    vector<bool> broken(N+1, false);
    for (int i = 0; i < M; i++) {
        int a;
        cin >> a;
        broken[a] = true;
    }

    vector<int> dp(N+1, 0);
    dp[0] = 1;
    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            dp[i] = dp[i-1];
        } else {
            dp[i] = (dp[i-1] + dp[i-2]) % mod;
        }
        if (broken[i]) {
            dp[i] = 0;
        }
    }

    cout << dp[N] << endl;

    return 0;
}