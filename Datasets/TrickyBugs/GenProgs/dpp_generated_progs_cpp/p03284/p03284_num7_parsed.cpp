#include <iostream>

int main() {
    int N, K;
    std::cin >> N >> K;

    int remainder = N % K;
    int difference = K - remainder;

    std::cout << difference << std::endl;

    return 0;
}