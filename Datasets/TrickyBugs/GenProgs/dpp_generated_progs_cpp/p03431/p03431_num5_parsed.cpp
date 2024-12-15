#include <iostream>
#include <vector>

const int MOD = 998244353;

int main() {
    int N, K;
    std::cin >> N >> K;

    // Calculate the prefix sum of the choices
    std::vector<long long> prefixSum(K + 1);
    prefixSum[0] = 1;

    for (int i = 1; i <= K; i++) {
        prefixSum[i] = (prefixSum[i - 1] * 2) % MOD;
    }

    // Calculate the answer
    long long answer = 0;
    if (N > 1) {
        for (int i = 0; i <= K; i++) {
            // Calculate the number of ways to distribute i red balls among N chameleons
            long long redDistributions = prefixSum[i];

            // Calculate the number of ways to distribute (K - i) blue balls among (N - 1) chameleons
            long long blueDistributions = prefixSum[K - i - 1];

            // Multiply the number of ways for red and blue distributions
            answer = (answer + (redDistributions * blueDistributions) % MOD) % MOD;
        }
    }

    std::cout << answer << std::endl;
    return 0;
}