#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

vector<vector<int>> dp(2001, vector<int>(2001, 0));

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    for(int i=0; i<=N; i++) {
        for(int j=0; j<=M; j++) {
            if(i==0 || j==0) {
                dp[i][j] = 1;
            }
            else {
                dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % MOD;
            }
        }
    }

    int ans = 0;
    for(int i=0; i<=N; i++) {
        for(int j=0; j<=M; j++) {
            int cnt = (dp[i][j] + dp[N-i][j] + dp[i][M-j] + dp[N-i][M-j]) % MOD;
            int cost = (((long long) cnt * (cnt-1)) / 2) % MOD;
            ans = (ans + cost) % MOD;
        }
    }

    cout << ans << endl;

    return 0;
}