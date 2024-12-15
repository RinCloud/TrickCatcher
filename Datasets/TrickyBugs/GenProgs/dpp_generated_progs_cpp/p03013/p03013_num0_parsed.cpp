#include <iostream>
#include <vector>
using namespace std;

int main() {
    int MOD = 1000000007;
    int N, M;
    cin >> N >> M;

    vector<long long> dp(N+1, 0);
    dp[0] = 1;
    vector<int> broken(M);
    for(int i = 0; i < M; i++) {
        cin >> broken[i];
    }

    for(int i = 1; i <= N; i++) {
        if(find(broken.begin(), broken.end(), i) == broken.end()) {
            if(i == 1) {
                dp[i] = dp[i-1] % MOD;
            } else {
                dp[i] = (dp[i-1] + dp[i-2]) % MOD;
            }
        }
    }

    cout << dp[N] << endl;
    return 0;
}