#include <iostream>

int countOddNumbersWithEightDivisors(int N) {
    int count = 0;
    for (int i = 1; i <= N; i++) {
        int divisors = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisors++;
            }
        }
        if (divisors == 8 && i % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int N;
    std::cin >> N;

    int result = countOddNumbersWithEightDivisors(N);
    std::cout << result;

    return 0;
}