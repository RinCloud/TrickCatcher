#include <iostream>

int main() {
    int N, X, T;
    std::cin >> N >> X >> T;

    int num_batches = N / X;
    if (N % X != 0) {
        num_batches++;
    }

    int total_time = num_batches * T;
    std::cout << total_time << std::endl;

    return 0;
}