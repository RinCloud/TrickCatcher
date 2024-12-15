#include <iostream>
#include <algorithm>

int main() {
    int A, B, C;
    int K;
    std::cin >> A >> B >> C >> K;

    int max_num = std::max({ A, B, C });
    int sum = A + B + C - max_num;

    for (int i = 0; i < K; i++) {
        max_num *= 2;
    }

    std::cout << sum + max_num << std::endl;

    return 0;
}