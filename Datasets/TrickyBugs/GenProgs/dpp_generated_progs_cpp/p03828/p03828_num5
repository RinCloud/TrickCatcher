#include <iostream>

const int MOD = 1000000007;

int main() {
    int N;
    std::cin >> N;

    int numDivisors = 1;

    bool isPrime[N + 1];
    for (int i = 2; i <= N; i++) {
        isPrime[i] = true;
    }

    for (int i = 2; i <= N; i++) {
        if (isPrime[i]) {
            int count = 0;
            for (int j = i; j <= N; j += i) {
                count += N / j;
            }
            numDivisors = (numDivisors * (count + 1)) % MOD;
            for (int j = i * i; j <= N; j += i) {
                isPrime[j] = false;
            }
        }
    }

    std::cout << numDivisors << std::endl;

    return 0;
}