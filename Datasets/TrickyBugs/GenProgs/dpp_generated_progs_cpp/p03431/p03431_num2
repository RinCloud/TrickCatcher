#include <iostream>
using namespace std;

#define MOD 998244353

int main() {
    int N, K;
    cin >> N >> K;

    if (N == 1) {
        cout << ((K == 1) ? 1 : 0) << endl;
        return 0;
    }

    // Initialize the prefix sum arrays
    long long prefix_sum_red[N + 1];
    long long prefix_sum_blue[N + 1];
    prefix_sum_red[0] = prefix_sum_blue[0] = 0;

    // Calculate the prefix sums
    for (int i = 1; i <= N; i++) {
        prefix_sum_red[i] = prefix_sum_red[i - 1] + i;
        prefix_sum_blue[i] = prefix_sum_blue[i - 1] + (K - i + 1);
    }

    // Calculate the number of possible ways
    long long ans = 0;
    for (int i = 0; i <= K; i++) {
        ans += (prefix_sum_red[i] + prefix_sum_blue[i] + i) % MOD;
        ans %= MOD;
    }

    cout << ans << endl;

    return 0;
}