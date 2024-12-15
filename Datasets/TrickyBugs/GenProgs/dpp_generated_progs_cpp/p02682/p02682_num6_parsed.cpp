#include <iostream>
#include <algorithm>

int main() {
    int A, B, C, K;
    std::cin >> A >> B >> C >> K;

    // calculate the sum of 1s, 0s, and -1s based on the number of cards
    int sum_of_1s = std::min(A, K);
    int sum_of_0s = std::min(B, std::max(0, K - A));
    int sum_of_minus_1s = std::min(C, std::max(0, K - (A + B)));

    // calculate the maximum possible sum
    int max_sum = sum_of_1s - sum_of_minus_1s;

    std::cout << max_sum << std::endl;

    return 0;
}