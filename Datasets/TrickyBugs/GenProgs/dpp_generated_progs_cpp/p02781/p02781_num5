#include <iostream>
#include <string>

int countIntegersWithKNonZeroDigits(long long N, int K) {
    int count = 0;

    for (long long i = 1; i <= N; i++) {
        std::string num = std::to_string(i);
        int nonZeroCount = 0;

        for (char digit : num) {
            if (digit != '0') nonZeroCount++;
        }

        if (nonZeroCount == K) count++;
    }

    return count;
}

int main() {
    long long N;
    int K;

    std::cin >> N >> K;

    int result = countIntegersWithKNonZeroDigits(N, K);

    std::cout << result << std::endl;

    return 0;
}