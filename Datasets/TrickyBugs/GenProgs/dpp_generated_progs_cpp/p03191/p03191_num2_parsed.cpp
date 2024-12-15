#include <iostream>
#include <vector>
#include <algorithm>
#define MOD 1000000007
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(2 * N);
    for (int i = 0; i < 2 * N; i++) {
        cin >> A[i];
    }
    
    vector<int> factors(2 * N + 1, 0);
    int cnt = 0;
    for (int i = 0; i < 2 * N; i++) {
        if (A[i] == -1) {
            cnt++;
        }
        else {
            if (factors[A[i]] == 1) {
                cout << "0" << endl;
                return 0;
            }
            factors[A[i]] = 1;
        }
    }
    
    int M = N - cnt;
    vector<vector<int>> dp(cnt + 1, vector<int>(M + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= cnt; i++) {
        for (int j = 0; j <= M; j++) {
            // Select the number from the already chosen numbers in A
            if (j - 1 >= 0) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - 1] * (j - 1)) % MOD;
            }
            // Select the number from the remaining numbers
            if (M - j >= 0) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j] * (M - j)) % MOD;
            }
        }
    }
    
    int ans = dp[cnt][M];
    for (int i = 2; i <= cnt; i++) {
        ans = (ans * i) % MOD;
    }
    cout << ans << endl;
    
    return 0;
}