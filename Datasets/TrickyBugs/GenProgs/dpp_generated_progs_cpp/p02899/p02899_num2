#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    std::vector<int> order(N);
    for (int i = 0; i < N; ++i) {
        order[A[i] - 1] = i + 1;
    }

    for (int i = 0; i < N; ++i) {
        std::cout << order[i] << " ";
    }

    return 0;
}