#include <iostream>
#include <vector>

const int MOD = 1e9 + 7;

int main() {
    int N, M, K;
    std::cin >> N >> M >> K;

    // Calculate three player's total deck sizes
    int total = N + M + K;

    // Calculate the number of possible patterns leading to Alice's victory
    long long ans = 1;
    std::vector<long long> pow3(total + 1, 1);
    for (int i = 1; i <= total; ++i) {
        pow3[i] = (pow3[i - 1] * 3) % MOD;
    }

    // Calculate the number of possible patterns leading to Alice's defeat
    long long sum = pow3[total - 1];
    for (int i = total - 1; i >= 1; --i) {
        sum = (sum * 2) % MOD;
        ans = (ans + sum) % MOD;
    }

    std::cout << ans << std::endl;
    return 0;
}
