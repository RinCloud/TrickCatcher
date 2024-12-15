#include <iostream>
#include <algorithm>

int main() {
    int A, B, C, K;
    std::cin >> A >> B >> C >> K;

    int max_num = std::max({ A, B, C });

    for (int i = 0; i < K; i++) {
        max_num *= 2;
    }

    int sum = A + B + C - max_num + max_num / 2;
    std::cout << sum << std::endl;

    return 0;
}