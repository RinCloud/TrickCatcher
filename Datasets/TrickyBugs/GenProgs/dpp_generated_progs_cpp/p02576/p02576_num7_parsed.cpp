#include <iostream>

int main() {
    int N, X, T;
    std::cin >> N >> X >> T;

    int minutes = (N / X) * T;
    if (N % X != 0) {
        minutes += T;
    }

    std::cout << minutes << std::endl;

    return 0;
}