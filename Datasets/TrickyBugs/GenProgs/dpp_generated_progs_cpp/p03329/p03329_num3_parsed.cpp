#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> dp(N + 1, N + 1);
    dp[0] = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j * j <= i; j *= 6) {
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
        for (int j = 1; j * j <= i; j *= 9) {
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }

    cout << dp[N] << endl;

    return 0;
}