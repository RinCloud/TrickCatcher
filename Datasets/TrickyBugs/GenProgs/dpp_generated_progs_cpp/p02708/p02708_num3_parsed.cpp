#include <iostream>
#include <vector>

const int MOD = 1e9 + 7;

int main() {
    int N, K;
    std::cin >> N >> K;

    std::vector<int> choices(N + 1);

    for (int i = 1; i <= N; ++i) {
        choices[i] = (choices[i - 1] + i) % MOD;
    }

    int result = 0;

    for (int i = K; i <= N + 1; ++i) {
        int min_sum = choices[i - 1];
        int max_sum = choices[N] - choices[N - i];

        result = (result + max_sum - min_sum + 1) % MOD;
    }

    std::cout << result << std::endl;

    return 0;
}