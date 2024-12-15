#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, A;
    cin >> N >> A;

    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }

    int dp[51][2501] = {};

    dp[0][0] = 1;
    for (int i = 0; i < N; i++) {
        for (int j = i; j >= 0; j--) {
            for (int k = x[i]; k <= A * N; k++) {
                dp[j + 1][k] += dp[j][k - x[i]];
            }
        }
    }

    int answer = 0;
    for (int i = 1; i <= N; i++) {
        answer += dp[i][i * A];
    }

    cout << answer << endl;

    return 0;
}