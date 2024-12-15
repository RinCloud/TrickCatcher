#include <iostream>

// Function to calculate number of trailing zeros in the decimal notation of f(N)
int calculateTrailingZeros(int N) {
    int count = 0;

    // Iterate from 5 till N and counting factors of 5
    for (int i = 5; N / i >= 1; i *= 5) {
        count += N / i;
    }

    return count;
}

int main() {
    int N;
    std::cin >> N;

    int result = calculateTrailingZeros(N);
    std::cout << result << std::endl;

    return 0;
}