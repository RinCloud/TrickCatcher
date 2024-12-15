#include <iostream>
#include <cmath>

int main() {
    int N, K;
    std::cin >> N >> K;

    int numDigits = 0;
    while (N > 0) {
        N /= K;
        numDigits++;
    }

    std::cout << numDigits << std::endl;

    return 0;
}