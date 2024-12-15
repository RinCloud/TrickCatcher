#include <iostream>
#include <vector>

const int MOD = 1000000007;

int main() {
    int N, K;
    std::cin >> N >> K;

    // Create a matrix to store the number of sequences
    std::vector<std::vector<int>> dp(K + 1, std::vector<int>(N + 1, 0));

    // Initialize the base case
    dp[0][0] = 1;

    // Iterate over the length of the sequence
    for (int len = 1; len <= K; len++) {
        // Iterate over the possible values for the last element of the sequence
        for (int last = 1; last <= N; last++) {
            // Iterate over the possible values for the second last element of the sequence
            for (int secondLast = 1; secondLast <= std::min(N, last); secondLast++) {
                // Add the number of sequences ending with 'last' and 'secondLast' to the current 'len' sequence
                dp[len][last] = (dp[len][last] + dp[len - 1][secondLast]) % MOD;
            }
        }
    }

    // Sum all the sequences of length K
    int result = 0;
    for (int i = 1; i <= N; i++) {
        result = (result + dp[K][i]) % MOD;
    }

    std::cout << result << std::endl;

    return 0;
}