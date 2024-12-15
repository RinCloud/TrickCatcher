#include <iostream>

int main() {
    int N;
    std::cin >> N;

    bool isPossible = false;

    for (int i = 1; i <= 9; i++) {
        if (N % i == 0 && N / i >= 1 && N / i <= 9) {
            isPossible = true;
            break;
        }
    }

    std::cout << (isPossible ? "Yes" : "No") << std::endl;

    return 0;
}