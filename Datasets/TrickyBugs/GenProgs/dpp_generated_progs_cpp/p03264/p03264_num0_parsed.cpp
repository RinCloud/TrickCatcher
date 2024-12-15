#include <iostream>

int main() {
    int K;
    std::cin >> K;

    int evenCount = K / 2;
    int oddCount = (K + 1) / 2;

    int result = evenCount * oddCount;
    std::cout << result << std::endl;

    return 0;
}