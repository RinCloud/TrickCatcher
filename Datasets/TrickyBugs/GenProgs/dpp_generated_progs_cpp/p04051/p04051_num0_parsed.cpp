#include <iostream>
#include <vector>

const int MOD = 1000000007;

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    std::vector<int> B(N);

    for (int i = 0; i < N; i++) {
        std::cin >> A[i] >> B[i];
    }

    std::vector<long long> factorial(4001);
    factorial[0] = 1;
    for (int i = 1; i <= 4000; i++) {
        factorial[i] = (factorial[i - 1] * i) % MOD;
    }

    long long total = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            long long count = 1;
            count = (count * factorial[A[i] + B[i]]) % MOD;
            count = (count * factorial[A[j] + B[j]]) % MOD;
            count = (count * factorial[A[i]]) % MOD;
            count = (count * factorial[B[i]]) % MOD;
            count = (count * factorial[A[j]]) % MOD;
            count = (count * factorial[B[j]]) % MOD;
            count = (count * factorial[A[i] + A[j]]) % MOD;
            count = (count * factorial[B[i] + B[j]]) % MOD;
            count = (count * factorial[A[i] + B[j]]) % MOD;
            count = (count * factorial[B[i] + A[j]]) % MOD;
            total = (total + count) % MOD;
        }
    }

    std::cout << total << std::endl;
    return 0;
}