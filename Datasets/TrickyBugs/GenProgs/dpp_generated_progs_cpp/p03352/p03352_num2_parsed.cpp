#include <iostream>
#include <cmath>

int main() {
    int X;
    std::cin >> X;

    int result = 0;
    for (int b = 1; b <= std::sqrt(X); b++) {
        for (int p = 2; std::pow(b, p) <= X; p++) {
            result = std::pow(b, p);
        }
    }

    std::cout << result << std::endl;

    return 0;
}