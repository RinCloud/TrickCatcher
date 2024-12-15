#include <iostream>

int main() {
    int K;
    std::cin >> K;

    int evenCount = K / 2;
    int oddCount = K - evenCount;
    int ways = evenCount * oddCount;

    std::cout << ways << std::endl;

    return 0;
}