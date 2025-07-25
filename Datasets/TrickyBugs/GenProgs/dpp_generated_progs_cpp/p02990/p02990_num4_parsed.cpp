#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N, K;
    cin >> N >> K;

    // Precompute factorial
    vector<int> factorial(N + 1, 1);
    for (int i = 2; i <= N; i++) {
        factorial[i] = (1LL * factorial[i - 1] * i) % MOD;
    }

    // Precompute inverse factorial
    vector<int> invFactorial(N + 1, 1);
    for (int i = 2; i <= N; i++) {
        invFactorial[i] = MOD - (1LL * (MOD / i) * invFactorial[MOD % i]) % MOD;
    }

    // Compute number of ways for each i
    vector<int> ways(K + 1, 0);
    for (int i = 1; i <= K; i++) {
        int numWays = (1LL * factorial[N - K + 1] * invFactorial[i]) % MOD;
        numWays = (1LL * numWays * invFactorial[N - K - i + 1]) % MOD;
        ways[i] = numWays;
    }

    // Print the number of ways
    for (int i = 1; i <= K; i++) {
        cout << ways[i] << endl;
    }

    return 0;
}
