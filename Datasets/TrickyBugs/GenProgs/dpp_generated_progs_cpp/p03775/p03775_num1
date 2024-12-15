#include <iostream>

int numDigits(int num) {
    if (num == 0) {
        return 1;
    }
    int digits = 0;
    while (num != 0) {
        num /= 10;
        digits++;
    }
    return digits;
}

int main() {
    int N;
    std::cin >> N;

    int minDigits = numDigits(N);
    for (int A = 1; A * A <= N; A++) {
        if (N % A == 0) {
            int B = N / A;
            int digits = std::max(numDigits(A), numDigits(B));
            minDigits = std::min(minDigits, digits);
        }
    }

    std::cout << minDigits << std::endl;

    return 0;
}