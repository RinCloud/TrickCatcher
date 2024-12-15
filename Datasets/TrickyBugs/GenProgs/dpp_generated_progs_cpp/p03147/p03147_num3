#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> flowers(N);
    for (int i = 0; i < N; i++) {
        std::cin >> flowers[i];
    }

    int totalOperations = 0;
    for (int i = 0; i < N - 1; i++) {
        if (flowers[i] < flowers[i + 1]) {
            totalOperations += flowers[i + 1] - flowers[i];
        }
    }

    std::cout << totalOperations << std::endl;

    return 0;
}