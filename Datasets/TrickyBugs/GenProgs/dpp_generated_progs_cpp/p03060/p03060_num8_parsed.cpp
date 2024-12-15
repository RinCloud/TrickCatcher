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

    int maxDifference = 0;
    for (int i = 0; i < N; i++) {
        int difference = V[i] - C[i];
        if (difference > 0) {
            maxDifference += difference;
        }
    }

    std::cout << maxDifference << std::endl;

    return 0;
}