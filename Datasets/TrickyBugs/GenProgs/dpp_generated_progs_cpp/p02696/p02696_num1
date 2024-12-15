#include <iostream>
#include <cmath>

int main() {
    int A, B, N;
    std::cin >> A >> B >> N;

    int max_value = 0;
    for (int x = 0; x <= N; x++) {
        int value = std::floor(A * x / B) - A * std::floor(x / B);
        max_value = std::max(max_value, value);
    }

    std::cout << max_value << std::endl;

    return 0;
}