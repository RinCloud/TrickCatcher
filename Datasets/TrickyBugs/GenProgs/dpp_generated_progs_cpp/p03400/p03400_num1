#include <iostream>
#include <vector>

int main() {
    int N, D, X;
    std::cin >> N >> D >> X;

    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    int total_chocolates = X;
    for (int i = 0; i < N; i++) {
        int days = (D - 1) / A[i] + 1;
        total_chocolates += days;
    }

    std::cout << total_chocolates << std::endl;

    return 0;
}