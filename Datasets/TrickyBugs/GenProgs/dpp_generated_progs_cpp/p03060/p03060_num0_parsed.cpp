#include <iostream>
#include <vector>

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

    int max_profit = 0;
    for (int i = 0; i < N; i++) {
        int profit = V[i] - C[i];
        if (profit > 0) {
            max_profit += profit;
        }
    }

    std::cout << max_profit;

    return 0;
}