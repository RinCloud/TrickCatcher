#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> height(N);
    for (int i = 0; i < N; i++) {
        std::cin >> height[i];
    }

    int operations = 0;

    for (int i = 0; i < N; i++) {
        if (i == 0 || height[i] != height[i-1]) {
            operations += height[i];
        } else {
            operations += 1;
        }
    }

    std::cout << operations << std::endl;

    return 0;
}