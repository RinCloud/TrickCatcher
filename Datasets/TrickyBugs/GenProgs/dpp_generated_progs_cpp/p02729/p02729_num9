#include <iostream>

int main() {
    int N, M;
    std::cin >> N >> M;

    int evenCount = N;
    int oddCount = M;

    int evenPairs = (evenCount * (evenCount - 1)) / 2;
    int oddPairs = (oddCount * (oddCount - 1)) / 2;

    int evenOddPairs = evenCount * oddCount;

    int answer = evenPairs + oddPairs + evenOddPairs;
    std::cout << answer << std::endl;

    return 0;
}