#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int N, Ma, Mb;
    cin >> N >> Ma >> Mb;

    vector<int> a(N), b(N), c(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    // calculate the greatest common divisor of Ma and Mb
    int g = gcd(Ma, Mb);

    // construct a dp table to store the minimum cost to achieve a certain amount of A and B
    const int INF = 1e9;
    const int MAX_AB = 10 * 40 + 1;
    vector<vector<int>> dp(MAX_AB, vector<int>(MAX_AB, INF));
    dp[0][0] = 0;

    for (int i = 0; i < N; i++) {
        for (int j = MAX_AB - 1; j >= a[i]; j--) {
            for (int k = MAX_AB - 1; k >= b[i]; k--) {
                dp[j][k] = min(dp[j][k], dp[j - a[i]][k - b[i]] + c[i]);
            }
        }
    }

    int ans = INF;
    for (int j = Ma; j < MAX_AB; j += Ma) {
        for (int k = Mb; k < MAX_AB; k += Mb) {
            ans = min(ans, dp[j][k]);
        }
    }

    if (ans == INF) {
        ans = -1;
    }

    cout << ans << endl;

    return 0;
}