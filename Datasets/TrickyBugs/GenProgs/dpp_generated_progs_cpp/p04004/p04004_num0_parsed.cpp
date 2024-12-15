#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    // Calculate the maximum size of the decks
    int maxSize = N + M + K;

    // Create a vector to store the count of patterns leading to Alice's victory
    vector<long long> dp(maxSize + 1, 0);

    // Initialize the base cases
    dp[0] = 1;

    // Calculate the count of patterns leading to Alice's victory
    for (int i = 0; i < maxSize; i++) {
        // If the current deck belongs to Alice, multiply the count by 2
        if (i < N)
            dp[i + 1] = (dp[i + 1] + 2 * dp[i]) % MOD;

        // If the current deck belongs to Bob, multiply the count by 3
        if (i < M)
            dp[i + 1] = (dp[i + 1] + 3 * dp[i]) % MOD;

        // If the current deck belongs to Charlie, multiply the count by 4
        if (i < K)
            dp[i + 1] = (dp[i + 1] + 4 * dp[i]) % MOD;
    }

    // Print the answer modulo 1e9 + 7
    cout << dp[maxSize] << endl;

    return 0;
}
