#include <iostream>
#include <cmath>

int main() {
    long long N;
    std::cin >> N;

    int minDigits = INT_MAX;
    for (long long A = 1; A <= sqrt(N); A++) {
        if (N % A == 0) {
            long long B = N / A;
            int digitsA = log10(A) + 1;
            int digitsB = log10(B) + 1;
            int maxDigits = std::max(digitsA, digitsB);
            minDigits = std::min(minDigits, maxDigits);
        }
    }

    std::cout << minDigits << std::endl;

    return 0;
}