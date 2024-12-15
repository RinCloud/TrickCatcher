#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> V(N);
    for (int i = 0; i < N; i++) {
        std::cin >> V[i];
    }

    std::vector<int> C(N);
    for (int i = 0; i < N; i++) {
        std::cin >> C[i];
    }

    int max_value = 0;
    for (int i = 0; i < N; i++) {
        int value = V[i] - C[i];
        if (value > 0) {
            max_value += value;
        }
    }

    std::cout << max_value << std::endl;

    return 0;
}