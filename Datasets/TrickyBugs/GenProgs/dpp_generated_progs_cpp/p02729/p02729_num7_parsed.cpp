#include <iostream>

int main() {
    int N, M;
    std::cin >> N >> M;

    int evenBalls = N;
    int oddBalls = M;

    int evenEvenPairs = (evenBalls * (evenBalls - 1)) / 2;
    int oddOddPairs = (oddBalls * (oddBalls - 1)) / 2;
    int evenOddPairs = evenBalls * oddBalls;

    int ways = evenEvenPairs + oddOddPairs + evenOddPairs;
    std::cout << ways << std::endl;

    return 0;
}