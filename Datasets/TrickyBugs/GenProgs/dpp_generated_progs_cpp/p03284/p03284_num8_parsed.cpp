#include <iostream>
#include <cmath>

int main() {
    int N, K;
    std::cin >> N >> K;

    int min_diff = std::abs(N % K - K);
    std::cout << min_diff << std::endl;

    return 0;
}