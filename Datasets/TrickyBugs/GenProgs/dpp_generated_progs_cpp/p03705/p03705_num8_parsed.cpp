#include <iostream>

int main() {
    int N, A, B;
    std::cin >> N >> A >> B;

    if (A == B) {
        std::cout << 1 << std::endl;
    } else if (N == 1) {
        std::cout << 0 << std::endl;
    } else {
        std::cout << B * (N - 2) - A * (N - 2) + 1 << std::endl;
    }

    return 0;
}