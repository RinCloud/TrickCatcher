#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> takoyaki(N);
    for (int i = 0; i < N; i++) {
        std::cin >> takoyaki[i];
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            sum += takoyaki[i] * takoyaki[j];
        }
    }

    std::cout << sum << std::endl;

    return 0;
}