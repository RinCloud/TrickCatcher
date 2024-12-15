#include <iostream>
#include <vector>
using namespace std;

const int mod = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> broken(N+1, 0);
    for (int i = 0; i < M; i++) {
        int a;
        cin >> a;
        broken[a] = 1;
    }

    vector<int> dp(N+1, 0);
    dp[0] = 1;
    for (int i = 1; i <= N; i++) {
        if (broken[i] == 1) {
            dp[i] = 0;
        } else {
            dp[i] = (dp[i-1] + dp[i-2]) % mod;
        }
    }

    cout << dp[N] << endl;

    return 0;
}