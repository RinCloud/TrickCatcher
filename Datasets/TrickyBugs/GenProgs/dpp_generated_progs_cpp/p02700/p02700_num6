#include <iostream>

int main() {
    int A, B, C, D;
    std::cin >> A >> B >> C >> D;

    while (true) {
        // Takahashi's turn
        C -= B;
        if (C <= 0) {
            std::cout << "Yes" << std::endl;
            break;
        }

        // Aoki's turn
        A -= D;
        if (A <= 0) {
            std::cout << "No" << std::endl;
            break;
        }
    }

    return 0;
}