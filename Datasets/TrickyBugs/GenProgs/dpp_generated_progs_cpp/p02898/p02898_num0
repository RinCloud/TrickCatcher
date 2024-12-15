#include <iostream>
#include <vector>

int main() {
    int N, K;
    std::cin >> N >> K;

    std::vector<int> heights(N);
    for (int i = 0; i < N; i++) {
        std::cin >> heights[i];
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (heights[i] >= K) {
            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}