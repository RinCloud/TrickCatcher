#include <iostream>
#include <vector>

const int MOD = 1000000007;

int main() {
    int N;
    std::cin >> N;

    // Calculate factorial modulo MOD
    std::vector<int> factorial(N + 1);
    factorial[0] = 1;
    for (int i = 1; i <= N; ++i) {
        factorial[i] = (factorial[i - 1] * i) % MOD;
    }

    // Calculate the sum of scores over all possible permutations
    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        int score = (factorial[N - 1] * (N - i + 1)) % MOD;
        sum = (sum + score) % MOD;
    }

    std::cout << sum << std::endl;

    return 0;
}