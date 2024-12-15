#include <iostream>
#include <cmath>

int main() {
    int K, N;
    std::cin >> K >> N;

    int half = std::ceil(1.0 * K * N / 2);
    int count = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= K; j++) {
            if (++count == half) {
                for (int k = 0; k < i; k++) {
                    std::cout << j << " ";
                }
                return 0;
            }
        }
    }

    return 0;
}