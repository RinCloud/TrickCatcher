#include <iostream>
#include <algorithm>

int main() {
    int A, B, C, K;
    std::cin >> A >> B >> C >> K;

    // Pick all cards with -1, until K becomes zero
    int sum = std::min(K, C) * -1;
    K -= std::min(K, C);

    // Pick all cards with 0, until K becomes zero
    sum += std::min(K, B) * 0;
    K -= std::min(K, B);

    // Pick all cards with 1, until K becomes zero
    sum += std::min(K, A) * 1;

    std::cout << sum;

    return 0;
}