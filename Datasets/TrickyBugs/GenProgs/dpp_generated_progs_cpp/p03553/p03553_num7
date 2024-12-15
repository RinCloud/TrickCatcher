#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> a(N);
    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }

    int maxEarned = 0;
    for (int i = 1; i <= N; i++) {
        int earned = 0;
        for (int j = i; j <= N; j += i) {
            earned += a[j - 1];
        }
        maxEarned = std::max(maxEarned, earned);
    }

    std::cout << maxEarned << std::endl;

    return 0;
}