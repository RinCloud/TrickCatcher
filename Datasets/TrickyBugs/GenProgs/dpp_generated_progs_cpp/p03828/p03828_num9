#include <iostream>
#include <vector>

const int MOD = 1000000007;

int main() {
    int N;
    std::cin >> N;

    std::vector<int> factors(N + 1, 0);

    for (int i = 2; i <= N; i++) {
        int num = i;
        for (int j = 2; j <= i; j++) {
            while (num % j == 0) {
                factors[j]++;
                num /= j;
            }
        }
    }

    long long result = 1;
    for (int i = 1; i <= N; i++) {
        result = (result * (factors[i] + 1)) % MOD;
    }

    std::cout << result << std::endl;

    return 0;
}