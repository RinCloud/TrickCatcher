#include <iostream>

int main() {
    // Read input
    int N, M;
    std::cin >> N >> M;

    // Calculate the number of ways to choose two balls with even sum
    int even_even = N * (N - 1) / 2; // Choosing two even balls
    int odd_odd = M * (M - 1) / 2; // Choosing two odd balls
    int even_odd = N * M; // Choosing one even ball and one odd ball

    // Print the result
    int ways = even_even + odd_odd + even_odd;
    std::cout << ways << std::endl;

    return 0;
}