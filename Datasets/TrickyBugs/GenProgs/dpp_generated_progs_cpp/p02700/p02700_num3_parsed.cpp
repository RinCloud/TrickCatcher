#include <iostream>

int main() {
    int A, B, C, D;
    std::cin >> A >> B >> C >> D;

    while (true) {
        C -= B; // Takahashi's monster attacks Aoki's monster
        if (C <= 0) { // Aoki's monster health becomes 0 or below, Takahashi wins
            std::cout << "Yes" << std::endl;
            break;
        }

        A -= D; // Aoki's monster attacks Takahashi's monster
        if (A <= 0) { // Takahashi's monster health becomes 0 or below, Aoki wins
            std::cout << "No" << std::endl;
            break;
        }
    }

    return 0;
}