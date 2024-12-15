#include <iostream>
#include <cmath>

int main() {
    long long N;
    std::cin >> N;

    int minDigits = INT_MAX;
    for (long long A = 1; A <= sqrt(N); A++) {
        if (N % A == 0) {
            long long B = N / A;
            int numDigits = std::max((int)std::to_string(A).size(), (int)std::to_string(B).size());
            minDigits = std::min(minDigits, numDigits);
        }
    }

    std::cout << minDigits << std::endl;

    return 0;
}