#include <iostream>

int main() {
    int A, B, C;
    std::cin >> A >> B >> C;

    if (A == B) {
        std::cout << C << std::endl;
    } else if (A == C) {
        std::cout << B << std::endl;
    } else {
        std::cout << A << std::endl;
    }

    return 0;
}