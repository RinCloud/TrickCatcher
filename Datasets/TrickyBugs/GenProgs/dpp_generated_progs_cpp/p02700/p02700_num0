#include <iostream>

int main() {
    int A, B, C, D;
    std::cin >> A >> B >> C >> D;

    while (A > 0 && C > 0) {
        C -= B;
        if (C <= 0) {
            std::cout << "Yes" << std::endl;
            return 0;
        }
        A -= D;
        if (A <= 0) {
            std::cout << "No" << std::endl;
            return 0;
        }
    }

    return 0;
}