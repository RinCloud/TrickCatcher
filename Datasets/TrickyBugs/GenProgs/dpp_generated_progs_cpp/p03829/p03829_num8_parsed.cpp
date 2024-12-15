#include <iostream>
#include <vector>

int main() {
    int N, A, B;
    std::cin >> N >> A >> B;
    std::vector<int> X(N);
    for (int i = 0; i < N; i++) {
        std::cin >> X[i];
    }

    long long total_fatigue = 0;
    for (int i = 1; i < N; i++) {
        int distance = X[i] - X[i - 1];
        total_fatigue += std::min(A * distance, B);
    }

    std::cout << total_fatigue << std::endl;

    return 0;
}