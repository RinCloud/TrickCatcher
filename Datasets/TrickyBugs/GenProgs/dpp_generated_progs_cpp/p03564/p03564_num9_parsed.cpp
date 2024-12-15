#include <iostream>

int main() {
    int N, K;
    std::cin >> N >> K;

    int min_value = 1;
    for (int i = 0; i < N; i++) {
        if (min_value * 2 < min_value + K) {
            min_value *= 2;
        } else {
            min_value += K;
        }
    }

    std::cout << min_value;

    return 0;
}