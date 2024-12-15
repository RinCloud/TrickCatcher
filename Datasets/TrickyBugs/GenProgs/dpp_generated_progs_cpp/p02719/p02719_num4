#include <iostream>
#include <cmath>

int main() {
    long long N, K;
    std::cin >> N >> K;

    // Find the remainder when dividing N by K
    long long remainder = N % K;

    // Use the absolute difference operation until remainder becomes minimum (0 or K)
    long long min_remainder = std::min(remainder, K - remainder);

    std::cout << min_remainder << std::endl;

    return 0;
}