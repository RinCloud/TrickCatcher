#include <iostream>

int main() {
    long long N, A, B;
    std::cin >> N >> A >> B;

    if (A > B || (N == 1 && A != B)) {
        std::cout << 0 << std::endl;
    } else {
        std::cout << B * (N - 2) - A * (N - 2) + 1 << std::endl;
    }

    return 0;
}